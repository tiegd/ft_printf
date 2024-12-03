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

CFLAGS = -Wall -Wextra -Werror -g3

LIB = ft_printf.h

SRC = 	ft_printf.c				\
		ft_putchar.c			\
		ft_putnbr_base.c		\
		ft_putnbr_unsigned.c	\
		ft_putnbr.c				\
		ft_putptr.c				\
		ft_strlen.c				\
		ft_putstr.c				\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	ar rcs $(NAME) $?

%.o : %.c Makefile
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus

.PHONY: all clean fclean re bonus