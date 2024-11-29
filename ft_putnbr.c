/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 08:38:33 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/29 08:38:36 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_strcmp(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
static int	ft_check_base(char *base)
{
	int	i;

	i = 0;
	if (ft_strcmp(base))
	{
		while (base[i])
		{
			if (base[i] == '+' || base[i] == '-')
				return (0);
			i++;
		}
	}
	if (i < 2)
		return (0);
	return (1);
}

int	ft_putnbr(int nbr, char *base, int count)
{
	int	i;

	i = 0;
	if (ft_check_base(base))
	{
		while (base[i])
			i++;
		if (nbr < 0)
		{
			count += ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr > 0)
		{
			ft_putnbr_base((nbr / i), base, count);
			count += ft_putchar(base[nbr % i]);
		}
	}
	return (count);
}
