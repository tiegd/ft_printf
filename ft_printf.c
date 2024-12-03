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

static int	ft_print_arg(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar((char) va_arg(ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (c == 'p')
		return (ft_putptr(va_arg(ap, size_t), "0123456789abcdef"));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(ap, unsigned int)));
	if (c == 'x')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	if (c == '%')
		return (ft_putchar('%'));
	return (-1);
}

static int	ft_check(const char **s, va_list ap)
{
	int	count;

	count = 0;
	if (**s == '%')
	{
		(*s)++;
		if (!*s)
			return (-1);
		count += ft_print_arg(**s, ap);
	}
	else
		count += ft_putchar(**s);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		count;
	int		check;

	count = 0;
	if (!s)
		return (-1);
	va_start(ap, s);
	while (*s)
	{
		check = ft_check(&s, ap);
		if (check < 0)
			return (-1);
		count += check;
		s++;
	}
	va_end(ap);
	return (count);
}
