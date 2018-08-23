# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgillett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 14:46:24 by lgillett          #+#    #+#              #
#    Updated: 2018/08/23 15:32:54 by lgillett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = read.c  

OBJ = read.o 

INC = Iread.h

all: $(NAME)

$(NAME): $(OBJ)
	    $(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	    $(CC) $(FLAGS) -o $@ -c $<  -$(INC)

clean:
	    rm -f $(OBJ)

fclean: clean
	    rm -f $(NAME)

re : clean all
