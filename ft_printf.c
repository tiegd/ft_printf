/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:58:16 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/26 12:58:19 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_check(c, ap)
{
	if (c == 'c')
		return (ft_putchar(ap));
	if (c == 's')
		return (ft_putstr(ap));
	if (c == 'p')
		return (ft_putptr(ap, "0123456789abcdef", 0));
	if (c == 'd')
		return (ft_putbnr(ap, "0123456789", 0));
	if (c == 'i')
		return (ft_putbnr(ap, "0123456789", 0));
	if (c == 'u')
		return (ft_putnbr_base(ap, "0123456789", 0));
	if (c == 'x')
		return (ft_putnbr_base(ap, "0123456789abcdef", 0));
	if (c == 'X')
		return (ft_putnbr_base(ap, "0123456789abcdef", 0));
	if (c == '%')
		return (ft_putchar('%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		len;

	va_start(ap, str);
	if (!str)
		return (-1);
	while (*str)
	{
		if (*str == '%')
			len = ft_check(str[count + 1], ap);
		count += len;
	}
	va_end(ap);
	return (count);
}

// int	main()
// {
// 	char			c = 'c';
// 	char			*str = "Salut";
// 	int				d = 42;
// 	unsigned long	u = 42;

// 	printf("%d", ft_printf("%s, %ca va ? %p, %d, %i, %u, %x, %X %%", c, str, str, d, d, u, u, u));
// 	printf("%d", printf("%s, %ca va ? %p, %d, %i, %u, %x, %X %%", c, str, str, d, d, u, u, u));
// }