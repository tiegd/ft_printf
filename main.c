#include "ft_printf.h"


int	main()
{
	char			c = 'c';
	char			*str = NULL;
	char			*str2 = "Salut";
	int				d = 42;
	unsigned int	u = 42;

	printf("Vrai printf nb = %d\n", printf("%s %s\n", str, str2));
	printf("Vrai printf nb = %d\n", printf("%p %p\n", str, str2));
	printf("Vrai printf nb = %d\n", printf("%d\n", d));
	printf("Vrai printf nb = %d\n", printf("%ca va ?\n", c));
	printf("Vrai printf nb = %d\n", printf("%i, %u\n", d, u));
	printf("Vrai printf nb = %d\n", printf("%x, %X\n", u, u));
	printf("Vrai printf nb = %d\n", printf("%%\n"));

	// printf("Mon ft_printf nb = %d\n", ft_printf("%s %s\n", str, str2));
	printf("Mon ft_printf nb = %d\n", ft_printf("%p %p\n", str, str2));
	// printf("Mon ft_printf nb = %d\n", ft_printf("%d\n", d));
	// printf("Mon ft_printf nb = %d\n", ft_printf("%ca va ?\n", c));
	// printf("Mon ft_printf nb = %d\n", ft_printf("%i, %u\n", d, u));
	// printf("Mon ft_printf nb = %d\n", ft_printf("%x, %X\n", u, u));
	// printf("Mon ft_printf nb = %d\n", ft_printf("%%\n"));
//	printf("nb = %d\n", ft_printf("%s, %p, %d, %ca va ? %i, %u, %x, %X %%\n", str, str, d, c, d, u, u, u));
}