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
HEADER = libftprintf.h
SRC = 	ft_printf.c			\
		ft_putnbr_base.c	\

OBJ = $(SRC:.c=.o)

all: libft/libft.a $(NAME)

libft

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c Makefile
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ) $(OBJBONUS) .bonus
fclean: clean
	rm -f $(NAME)
re: fclean all bonus

.PHONY: all fclean re bonus