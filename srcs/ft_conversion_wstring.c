/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_wstring.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 10:12:50 by lbogar            #+#    #+#             */
/*   Updated: 2016/12/16 10:12:60 by lbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_parse_wstring(t_wstring *wstring)
{
	wchar_t	*wstr;
	size_t	bytes;

	bytes = 0;
	wstr = wstring->data;
	while (*wstr)
	{
		if (*wstr <= 0x7F)
			bytes++;
		else if (*wstr <= 0x7FF)
			bytes += 2;
		else if (*wstr <= 0xFFFF)
			bytes += 3;
		else if (*wstr <= 0x10FFFF)
			bytes += 4;
		wstr++;
	}
	wstring->bytes = bytes;
}

void	ft_increment_precision(size_t *bytes, int *precision, int len)
{
	if (len == 1)
	{
		*bytes += 1;
		*precision -= 1;
	}
	if (len == 2)
	{
		*bytes += 2;
		*precision -= 2;
	}
	if (len == 3)
	{
		*bytes += 3;
		*precision -= 3;
	}
	if (len == 4)
	{
		*bytes += 4;
		*precision -= 4;
	}
	else
		return ;
}

void	ft_wstring_precision(t_print *flag, t_wstring *wstring)
{
	wchar_t	*wstr;
	size_t	bytes;
	int		precision;

	bytes = 0;
	wstr = wstring->data;
	precision = flag->precision;
	while (*wstr && precision > 0)
	{
		if (*wstr <= 0x7F)
			ft_increment_precision(&bytes, &precision, 1);
		else if (*wstr <= 0x7FF && precision >= 2)
			ft_increment_precision(&bytes, &precision, 2);
		else if (*wstr <= 0xFFFF && precision >= 3)
			ft_increment_precision(&bytes, &precision, 3);
		else if (*wstr <= 0x10FFFF && precision >= 4)
			ft_increment_precision(&bytes, &precision, 4);
		wstr++;
	}
	wstring->bytes = bytes;
}

size_t	ft_print_wstr_width(t_print *flag, size_t len)
{
	size_t	count;
	char	*padding;

	if (flag->width == 0)
		return (0);
	if (flag->zero_flag == 1)
	{
		padding = ft_strnew(len);
		ft_strset(padding, '0', 0, len);
		count = write(1, padding, len);
		free(padding);
	}
	else
	{
		padding = ft_strnew(len);
		ft_strset(padding, ' ', 0, len);
		count = write(1, padding, len);
		free(padding);
	}
	return (count);
}

size_t	ft_convert_wstring(t_print *flag, va_list *vars)
{
	size_t		count;
	t_wstring	*wstring;
	size_t		width;

	count = 0;
	wstring = ft_memalloc(sizeof(t_wstring*));
	wstring->data = va_arg(*vars, wchar_t*);
	if (wstring->data == NULL)
		wstring->data = L"(null)";
	ft_parse_wstring(wstring);
	if (flag->precision_found)
		ft_wstring_precision(flag, wstring);
	width = wstring->bytes > flag->width ? 0 : (flag->width - wstring->bytes);
	if (flag->width_found && flag->minus_flag == 0)
		count += ft_print_wstr_width(flag, width);
	count += ft_putnwstr(wstring->data, wstring->bytes);
	if (flag->width_found && flag->minus_flag == 1)
		count += ft_print_wstr_width(flag, width);
	if (wstring != NULL)
		free(wstring);
	return (count);
}
