#include "ft_printf.h"


int	main()
{
	char			c = 'c';
	char			*str = NULL;
	char			*str2 = "Salut";
	int				d = 42;
	unsigned int	u = 65;

	printf("Vrai printf nb = %d\n", printf("s = %s %s\n", str, str2));
	printf("Mon ft_printf nb = %d\n", ft_printf("s = %s %s\n", str, str2));
	printf("\n");

	printf("Vrai printf nb = %d\n", printf("p = %p\n", str));
	printf("Mon ft_printf nb = %d\n", ft_printf("p = %p\n", str));
	printf("\n");

	printf("Vrai printf nb = %d\n", printf("p = %p\n", str2));
	printf("Mon ft_printf nb = %d\n", ft_printf("p = %p\n", str2));
	printf("\n");

	printf("Vrai printf nb = %d\n", printf("d = %d\n", d));
	printf("Mon ft_printf nb = %d\n", ft_printf("d = %d\n", d));
	printf("\n");

	printf("Vrai printf nb = %d\n", printf("i = %i\n", d));
	printf("Mon ft_printf nb = %d\n", ft_printf("i = %i\n", d));
	printf("\n");

	printf("Vrai printf nb = %d\n", printf("c = %ca va ?\n", c));
	printf("Mon ft_printf nb = %d\n", ft_printf("c = %ca va ?\n", c));
	printf("\n");

	printf("Vrai printf nb = %d\n", printf("u = %u\n", u));
	printf("Mon ft_printf nb = %d\n", ft_printf("u = %u\n", u));
	printf("\n");

	printf("Vrai printf nb = %d\n", printf("x et X = %x, %X\n", u, u));
	printf("Mon ft_printf nb = %d\n", ft_printf("x et X = %x, %X\n", u, u));
	printf("\n");

	printf("Vrai printf nb = %d\n", printf("%%\n"));
	printf("Mon ft_printf nb = %d\n", ft_printf("%%\n"));
	printf("\n");
	
	printf("Vrai printf nb = %d\n", printf("ça renvoie ça\n"));
	printf("Mon ft_printf nb = %d\n", ft_printf("ça renvoie ça\n"));
	printf("\n");

	printf("nb = %d\n", printf("Full = %s, %p, %d, %ca va ? %i, %u, %x, %X %%\n", str, str, d, c, d, u, u, u));
	printf("nb = %d\n", ft_printf("Full = %s, %p, %d, %ca va ? %i, %u, %x, %X %%\n", str, str, d, c, d, u, u, u));
	printf("\n");

	printf("nb = %d\n", printf(0));
	printf("nb = %d\n", ft_printf(0));
	printf("\n");

	printf("nb = %d\n", printf("%%"));
	printf("nb = %d\n", ft_printf("%"));
	printf("\n");

	printf("nb = %d\n", printf(NULL));
	printf("nb = %d\n", ft_printf(NULL));
	printf("\n");

	printf("nb = %d\n", printf(" %d ", 0));
	printf("nb = %d\n", ft_printf(" %d ", 0));
	printf("\n");

}