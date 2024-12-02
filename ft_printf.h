/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:00:25 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/26 13:00:27 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(int n, int count);
int	ft_putnbr_base(unsigned int nbr, char *base, int count);
int	ft_putchar(char c);
int	ft_putptr(size_t nbr, char *base, int count);
int	ft_putstr(char *s);
int	ft_putnbr_unsigned(unsigned int n, int count);
int ft_strlen(const char *s);

#endif