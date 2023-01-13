# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 23:53:25 by mecauchy          #+#    #+#              #
#    Updated: 2023/01/11 12:53:47 by mecauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	get_next_line_utils.c get_next_line.c
			
OBJS	=	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

DEBUG	=	-g3

NAME	=	get_next_line.a

HEADER	=	get_next_line.h

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			ar rc $@ $^

%.o 	:	%.c $(HEADER)
			$(CC) $(CFLAGS) $(DEBUG) -o $@ -c $<
			
main	:	all
			$(CC) $(CFLAGS) -o $@ $^

clean	:
			bin/rm -rf $(OBJS)

fclean	:	clean
			bin/rm -rf $(NAME)

re 		:	fclean all
