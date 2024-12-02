/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 08:38:33 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/29 08:38:36 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int count)
{
	if (!n)
		return (-1);
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr((n / 10), count);
		count += ft_putchar((n % 10 + '0'));
	}
	if (n >= 0 && n <= 9)
		count += ft_putchar((n + '0'));
	return (count);
}