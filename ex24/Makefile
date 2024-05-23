NAME    = libft.a
SRCS    = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS    = ${SRCS:.c=.o}
INCS    = includes
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I${INCS}

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
		ar -rsc ${NAME} ${OBJS}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
