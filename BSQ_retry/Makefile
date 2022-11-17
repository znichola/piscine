CC = gcc
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address
RM = rm -f

SRCS = main.c ft_atoi.c ft_check_square.c ft_input.c ft_obstacles.c ft_print.c ft_read_file.c ft_solve.c ft_strutils.c
OBJS = ${SRCS:.c=.o}

TARGET = bsq

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${TARGET}

${TARGET}: ${OBJS}
	${CC} ${CFLAGS} -o ${TARGET} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${TARGET}

re: fclean all

.PHONY: all clean fclean re
