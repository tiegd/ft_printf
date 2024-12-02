/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:55:45 by gaducurt          #+#    #+#             */
/*   Updated: 2024/12/02 14:55:47 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, int count)
{
	if (n < 0)
		return (-1);
	if (n > 9)
	{
		ft_putnbr_unsigned((n / 10), count);
		count += ft_putchar((n % 10 + '0'));
	}
	if (n >= 0 && n <= 9)
		count += ft_putchar((n + '0'));
	return (count);
}