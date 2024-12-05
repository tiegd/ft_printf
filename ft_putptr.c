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

static int	ft_putptr_base(size_t nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_putptr_base((nbr / 16), base);
		if (count < 0)
			return (-1);
	}
	count += ft_putchar(base[nbr % 16]);
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_putptr(size_t nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (write(1, "(nil)", 5));
	count += ft_putstr("0x");
	if (count < 0)
		return (-1);
	count += ft_putptr_base(nbr, base);
		if (count < 0)
			return (-1);
	return (count);
}
