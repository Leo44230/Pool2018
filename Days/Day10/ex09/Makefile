# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgillett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 20:15:39 by lgillett          #+#    #+#              #
#    Updated: 2018/08/20 14:58:47 by lgillett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c \
	  ft_putstr.c \
	  ft_atoi.c \
	  ft_opper.c \
	  ft_putnbr.c \
	  ft_calc.c \
	  main.c 

INC = -Ift_fcts.h \
	  -Ift_opp.h

all : $(NAME)

$(NAME) : 
	$(CC) $(SRC) $(INC) -o $(NAME)

clean :
	rm -f $(NAME)

re : clean all
