# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgillett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 02:50:28 by lgillett          #+#    #+#              #
#    Updated: 2018/08/20 15:18:32 by lgillett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ft_putstr.c \
	  read.c 

OBJ = ft_putstr.o \
	  read.o

INC = -Iread.h

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(FLAGS) $(INCL)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
