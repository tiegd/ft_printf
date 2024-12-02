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
		return (ft_putptr(va_arg(ap, size_t), "0123456789abcdef", 0));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int), 0));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(ap, unsigned int), 0));
	if (c == 'x')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef", 0));
	if (c == 'X')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF", 0));
	if (c == '%')
		return (ft_putchar('%'));
}

int	ft_check(char *s, int i, va_list ap)
{
	if  (!s)
		return (-1);
	if (s == 'c' || s == 's' || s == 'p' || s == 'd' || s == 'u' || s == 'x' 
		|| s == "X" || s == '%')
		return (ft_print_arg(s, ap));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		count;
	int		len;
	int		i;

	count = 0;
	i = 0;
	if (!s)
		return (-1);
	va_start(ap, s);
	while (*s)
	{
		if (s[i] == '%')
		{
			i++;
			if (ft_check(s, i, ap) == -1)
				return (-1);
			if (ft_check(s, i, ap))
				len = ft_print_arg(s[i], ap);
		}
		count += len;
		ft_putchar(s[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
