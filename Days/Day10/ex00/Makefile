# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgillett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 00:03:32 by lgillett          #+#    #+#              #
#    Updated: 2018/08/20 15:13:32 by lgillett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRC = 	srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
  		srcs/ft_strlen.c \
		srcs/ft_swap.c

OBJ = 	ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o 

INCL = Iincludes

all: $(NAME)

$(NAME): createo
	ar rc $(NAME) $(OBJ)

createo:
	$(CC) -c $(SRC) -$(INCL)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	



