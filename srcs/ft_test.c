// #include "libftprintf.h"
//
// int		main(void)
// {
// 	int ret;
//
// 	printf("testing: {%%S}, L'Á±≥'\n");
// 	ret = printf("lb: {%S}\n", L"Á±≥");
// 	printf ("ret: %d\n", ret);
// 	ret = ft_printf("ft: {%S}\n", L"Á±≥");
// 	printf ("ret: %d\n", ret);
// 	printf("testing: {%%30S}, L'ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B'\n");
// 	ret = printf("lb: {%30S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
// 	printf ("ret: %d\n", ret);
// 	ret = ft_printf("ft: {%30S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
// 	printf ("ret: %d\n", ret);
// 	printf("testing: {%%.4S}, L'ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B'\n");
// 	ret = printf("lb: {%.4S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
// 	printf ("ret: %d\n", ret);
// 	ret = ft_printf("ft: {%.4S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
// 	printf ("ret: %d\n", ret);
// 	printf("testing: {%%030S}, L'ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B'\n");
// 	ret = printf("lb: {%030S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
// 	printf ("ret: %d\n", ret);
// 	ret = ft_printf("ft: {%030S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
// 	printf ("ret: %d\n", ret);
// 	printf("testing: {%%05.S}, L'42 c est cool'\n");
// 	ret = printf("lb: {%05.S}\n", L"42 c est cool");
// 	printf ("ret: %d\n", ret);
// 	ret = ft_printf("ft: {%05.S}\n", L"42 c est cool");
// 	printf ("ret: %d\n", ret);
// 	// printf("testing: {%%S}, '€'\n");
// 	// ret = printf("lb: {%S}\n", L"this is a string with a unicode char: €");
// 	// printf ("ret: %d\n", ret);
// 	// ret = ft_printf("ft: {%S}\n", L"this is a string with a unicode char: €");
// 	// printf ("ret: %d\n", ret);
// 	// printf("testing: {%%C}, 0x20AC\n");
// 	// ret = printf("lb: {%C}\n", 0x20AC);
// 	// printf ("ret: %d\n", ret);
// 	// ret = ft_printf("ft: {%C}\n", 0x20AC);
// 	// printf ("ret: %d\n", ret);
// 	// printf("testing: {%%C}, 'a'\n");
// 	// ret = printf("lb: {%C}\n", 'a');
// 	// printf ("ret: %d\n", ret);
// 	// ret = ft_printf("ft: {%C}\n", 'a');
// 	// printf ("ret: %d\n", ret);
// 	// printf("testing: {%%C}, 34\n");
// 	// ret = printf("lb: {%C}\n", 34);
// 	// printf ("ret: %d\n", ret);
// 	// ret = ft_printf("ft: {%C}\n", 34);
// 	// printf ("ret: %d\n", ret);
// 	// printf("testing: {%%10C}, 0x20AC\n");
// 	// ret = printf("lb: {%10C}\n", 0x20AC);
// 	// printf ("ret: %d\n", ret);
// 	// ret = ft_printf("ft: {%10C}\n", 0x20AC);
// 	// printf ("ret: %d\n", ret);
// 	// printf("testing: {something %%10C something}, 0x20AC\n");
// 	// ret = printf("lb: {something %10C something}\n", 0x20AC);
// 	// printf ("ret: %d\n", ret);
// 	// ret = ft_printf("ft: {something %10C something}\n", 0x20AC);
// 	// printf ("ret: %d\n", ret);
// 	// printf("testing: {something %%10C something}, 'a'\n");
// 	// ret = printf("lb: {something %10C something}\n", 'a');
// 	// printf ("ret: %d\n", ret);
// 	// ret = ft_printf("ft: {something %10C something}\n", 'a');
// 	// printf ("ret: %d\n", ret);
// }
