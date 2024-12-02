/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:25:59 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/29 15:26:01 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_base(size_t nbr, char *base, int count)
{
	if (nbr >= 16)
	{
		count += ft_putptr_base((nbr / 16), base, count);
		count += ft_putchar(base[nbr % 16]);
	}
	else
		count += ft_putchar(base[nbr]);
	return (count);
}
int	ft_putptr(size_t nbr, char *base, int count)
{
	if (nbr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count += ft_putstr("0x");
	count += ft_putptr_base(nbr, base, count);
	return (count);
}
