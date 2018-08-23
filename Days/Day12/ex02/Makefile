# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgillett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 03:19:02 by lgillett          #+#    #+#              #
#    Updated: 2018/08/21 03:40:03 by lgillett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = error.c \
	  create_buf.c \
	  ft_putstr.c \
	  tail.c \
	  fcts.c \
	  ft_atoi.c
	
OBJ = error.o \
	  create_buf.o \
	  ft_putstr.o \
	  tail.o \
	  fcts.o \
	  ft_atoi.o

INC = Iread.h

all: $(NAME)

$(NAME): $(OBJ)
	        $(CC) -o $(NAME) $(OBJ)

%.o: %.c
	        $(CC) -o $@ -c $<  -$(INC)

clean:
	        rm -f $(OBJ)

fclean: clean
	        rm -f $(NAME)

re : clean all

