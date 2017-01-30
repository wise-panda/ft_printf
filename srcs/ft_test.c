#include "libftprintf.h"

int		main(void)
{
	int ret;

	printf("testing: {%%S}, '@'\n");
	ret = printf("lb: {%S}\n", "this is a string");
	printf ("ret: %d\n", ret);
	ret = ft_printf("ft: {%S}\n", "this is a string");
	printf ("ret: %d\n", ret);
	printf("testing: {%%C}, 0x20AC\n");
	ret = printf("lb: {%C}\n", 0x20AC);
	printf ("ret: %d\n", ret);
	ret = ft_printf("ft: {%C}\n", 0x20AC);
	printf ("ret: %d\n", ret);
	printf("testing: {%%C}, 'a'\n");
	ret = printf("lb: {%C}\n", 'a');
	printf ("ret: %d\n", ret);
	ret = ft_printf("ft: {%C}\n", 'a');
	printf ("ret: %d\n", ret);
	printf("testing: {%%C}, 34\n");
	ret = printf("lb: {%C}\n", 34);
	printf ("ret: %d\n", ret);
	ret = ft_printf("ft: {%C}\n", 34);
	printf ("ret: %d\n", ret);
	printf("testing: {%%10C}, 0x20AC\n");
	ret = printf("lb: {%10C}\n", 0x20AC);
	printf ("ret: %d\n", ret);
	ret = ft_printf("ft: {%10C}\n", 0x20AC);
	printf ("ret: %d\n", ret);
	printf("testing: {something %%10C something}, 0x20AC\n");
	ret = printf("lb: {something %10C something}\n", 0x20AC);
	printf ("ret: %d\n", ret);
	ret = ft_printf("ft: {something %10C something}\n", 0x20AC);
	printf ("ret: %d\n", ret);
	printf("testing: {something %%10C something}, 'a'\n");
	ret = printf("lb: {something %10C something}\n", 'a');
	printf ("ret: %d\n", ret);
	ret = ft_printf("ft: {something %10C something}\n", 'a');
	printf ("ret: %d\n", ret);
}
