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

#include "ft_printf.h"

static int	ft_check(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (c == 'p')
		return (ft_putptr(va_arg(ap, int), "0123456789abcdef", 0));
	if (c == 'd')
		return (ft_putnbr(va_arg(ap, int), 0));
	if (c == 'i')
		return (ft_putnbr(va_arg(ap, int), 0));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(ap, unsigned int), 0));
	if (c == 'x')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef", 0));
	if (c == 'X')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef", 0));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		len;
	int		i;

	count = 0;
	i = 0;
	va_start(ap, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			if (ft_check(format[i + 1], ap) < 0)
				return (-1);
			len = ft_check(format[i + 1], ap);
			i += 2;
		}
		count += len;
		ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

int	main()
{
	char			c = 'c';
	char			*str = "Salut";
	int				d = 42;
	unsigned int	u = 42;

	printf("%d", ft_printf("%s, %ca va ? %p, %d, %i, %u, %x, %X %%", str, c, str, d, d, u, u, u));
	printf("%d", printf("%s, %ca va ? %p, %d, %i, %u, %x, %X %%", str, c, str, d, d, u, u, u));
}