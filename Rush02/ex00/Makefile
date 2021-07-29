SRCS	= ft_check_index.c \
		  ft_error.c \
		  ft_order66.c \
		  ft_read.c \
		  ft_solve.c \
		  ft_split.c \
		  ft_utils.c \
		  ft_utils2.c \
		  ft_order77.c \
		  main.c
OBJS	= $(addprefix srcs/, ${SRCS:.c=.o})
EXEC	= rush-02
CFLAGS	= -Wall -Werror -Wextra
CC		= gcc
HEAD	= includes

all:	${EXEC}

${EXEC}: ${OBJS}
	${CC} ${CFLAGS} $^ -o $@

.c.o:
	${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${EXEC}

re:		fclean all

.PHONY:	all clean fclean re
