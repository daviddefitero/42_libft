# FILES
SRC:=$(wildcard ft_*.c)
OBJ:=$(patsubst %.c,%.o,$(SRC))
NAME=libft.a

# C COMPILER
CC=cc
CFLAGS=-Wall -Werror -Wextra -c

# AR LIBRARY
AR=ar
AFLAGS=rc

# RM
RM=rm

${NAME}:
	${CC} ${CFLAGS} ${SRC}
	${AR} ${AFLAGS} ${NAME} ${OBJ}
all: ${NAME}
clean:
	${RM} -rf ${OBJ}
fclean: clean
	${RM} -f ${NAME}
re: fclean all