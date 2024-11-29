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

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(int nbr, char *base, int count);
int	ft_putnbr_base(int nbr, char *base, int count);
int	ft_putchar(char c);
int	ft_putptr(int nbr, char *base, int count);
void	ft_putstr_fd(char *s, int fd);

#endif