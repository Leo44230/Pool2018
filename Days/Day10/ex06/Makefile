# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgillett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 20:15:39 by lgillett          #+#    #+#              #
#    Updated: 2018/08/15 17:44:13 by lgillett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c \
	  ft_putstr.c \
	  ft_atoi.c \
	  ft_opp.c \
	  ft_putnbr.c \
	  main.c 

all : $(NAME)

$(NAME) : 
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -f $(NAME)

re : clean all
