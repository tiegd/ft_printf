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

static int	ft_putptr_base(int nbr, char *base, int count)
{
	if (nbr > 0)
	{
		ft_putptr_base((nbr / 16), base, count);
		count += ft_putchar(base[nbr % 16]);
	}
	return (count);
}
int	ft_putptr(int nbr, char *base, int count)
{
	if (nbr <= 0)
		return (write(1, "(nil)", 5));
	count += ft_putstr("0x");
	count += ft_putptr_base(nbr, base, count);
	return (count);
}
