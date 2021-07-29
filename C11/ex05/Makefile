# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mapontil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/28 16:05:17 by mapontil          #+#    #+#              #
#    Updated: 2021/07/28 16:05:20 by mapontil         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	=	 main.c utils.c check.c doop.c
OBJS	=	${addprefix ,${SRCS:.c=.o}}
HEAD	=	ft_includes.h
cc		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	do-op
.c.o:
			${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}
all :		${OBJS}
			${CC} ${CFLAGS} -o do-op ${SRCS}
clean:
			rm -f ${OBJS}
fclean:		clean
			rm -f ${NAME}
re:			fclean all
.PHONY:		all clean fclean re
