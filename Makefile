# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 13:11:06 by gaducurt          #+#    #+#              #
#    Updated: 2024/11/26 13:11:07 by gaducurt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIB = ft_printf.h

SRC = 	ft_printf.c				\
		ft_putchar.c			\
		ft_putnbr_base.c		\
		ft_putnbr_unsigned.c	\
		ft_putnbr.c				\
		ft_putptr.c				\
		ft_putstr.c				\

OBLIBFT = libft/ft_strlen.o

OBJ = $(SRC:.c=.o)

all: libft/libft.a $(NAME)

libft/libft.a :
	$(MAKE) -C libft

$(NAME): $(OBJ) $(LIB)
	ar rcs $(NAME) $?

%.o : %.c Makefile
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(MAKE) -C libft fclean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus

.PHONY: all clean fclean re bonus