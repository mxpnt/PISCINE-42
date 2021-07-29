SRCS		= main.c ft_file.c ft_utilities.c ft_utilities2.c ft_split.c ft_resolve.c ft_stat.c ft_error.c

OBJS		= $(addprefix srcs/, ${SRCS:.c=.o})

NAME		= bsq

CC			= gcc

OFFFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} ${FLAGS} -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re debug
