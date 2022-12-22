#include "../includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int				i;
	int				d;
	unsigned int	u;
	char			c;
	char			str[] = "ciao";


	i = 15;
	d = 42;
	u = 4294967295;
	c = 'a';
	ft_printf("checking _i:\n");
	ft_printf("ft: %i\n", i);
	printf("original: %i\n", i);
	ft_printf("__________\n");
	ft_printf("checking _d:\n");
	ft_printf("ft: %d\n", d);
	printf("original: %d\n", d);
	ft_printf("__________\n");
	ft_printf("checking _u:\n");
	ft_printf("ft: %u\n", u);
	printf("original: %u\n", u);
	ft_printf("__________\n");
	ft_printf("checking _c:\n");
	ft_printf("ft: %c\n", c);
	printf("original: %c\n", c);
	ft_printf("__________\n");
	ft_printf("checking _s:\n");
	ft_printf("ft: %s\n", str);
	printf("original: %s\n", str);
	ft_printf("__________\n");
	ft_printf("checking _X:\n");
	ft_printf("ft: %X\n", i);
	printf("original: %X\n", i);
	ft_printf("__________\n");
	ft_printf("checking _x:\n");
	ft_printf("ft: %x\n", i);
	printf("original: %x\n", i);
	ft_printf("__________\n");
	ft_printf("checking _perc_lonely:\n");
	ft_printf("%");
	printf("%");
	ft_printf("__________\n");
	ft_printf("checking _perc_double:\n");
	ft_printf("ft: %%\n");
	printf("original: %%\n");
}
