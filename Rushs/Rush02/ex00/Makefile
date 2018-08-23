# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 10:14:17 by anrzepec          #+#    #+#              #
#    Updated: 2018/08/20 15:04:53 by lgillett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.SILENT:

NAME 	= 	colle-2

SRC 	= 	$(wildcard srcs/*.c)

OBJS	=	$(SRC:.c=.o)

CC		=	gcc

CFLAGS	+=	-Werror -Wall -Wextra

RM		=	rm -f

INCL	=	Iincludes

all		: 	$(NAME)

%.o		: 	%.c	
			$(CC) $(CFLAGS) -c $< -o $@ -$(INCL)

$(NAME)	:	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) 


clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
