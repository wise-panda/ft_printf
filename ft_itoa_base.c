/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 12:53:51 by lbogar            #+#    #+#             */
/*   Updated: 2016/12/21 12:53:52 by lbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen_base(intmax_t number, size_t base)
{
	int	i;

	i = 0;
	if (number == 0)
		return (1);
	while (number)
	{
		number /= base;
		++i;
	}
	return (i);
}

char	*ft_itoa_base(intmax_t number, char *base_chars, size_t base)
{
	char	*string;
	int		len;
	int		negative;

	negative = 0;
	if (number < 0)
	{
		negative = 1;
		number *= -1;
	}
	len = ft_intlen_base(number, base) + negative;
	if ((string = ft_strnew(len--)) == NULL)
		return (NULL);
	if (number == 0)
		string[0] = base_chars[0];
	while (number)
	{
		string[len--] = base_chars[(number % base)];
		number /= base;
	}
	if (negative)
		string[0] = '-';
	return (string);
}
