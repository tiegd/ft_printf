/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:22:08 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/29 15:22:09 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_putnbr_base((nbr / 16), base);
		if (count < 0)
			return (-1);
	}
	count += ft_putchar(base[nbr % 16]);
		if (count < 0)
			return (-1);
	return (count);
}
