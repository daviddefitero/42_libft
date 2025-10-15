# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 21:44:11 by dde-fite          #+#    #+#              #
#    Updated: 2025/10/15 21:47:18 by dde-fite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# *                            LIBFT by dde-fite                             * #
# **************************************************************************** #

# ******************************** VARIABLES  ******************************** #
# FILES
NAME	= libft.a
SRC		:= $(wildcard ft_*.c)
OBJ		:= $(patsubst %.c,%.o,$(SRC))

# GCC COMPILER
CC		= cc
CFLAGS	= -Wall -Werror -Wextra -c

# AR LIBRARY
AR		= ar
AFLAGS	= rcs

# RM COMMAND
RM		= rm

# ********************************** RULES  ********************************** #
${NAME}:
	@echo "# **************************************************************** #"
	@echo "# *                      LIBFT by dde-fite                       * #"
	@echo "# **************************************************************** #"
	@echo "Compiling LIBFT as ${NAME} ..."
	@echo ""
	@${CC} ${CFLAGS} ${SRC}
	@${AR} ${AFLAGS} ${NAME} ${OBJ}
	@echo "Compilation completed :)"
	@echo ""

all: ${NAME}

clean:
	@echo "Deleting all object files (.o of ft_*.c) ..."
	@echo ""
	@${RM} -rf ${OBJ}

fclean: clean
	@echo "Deleting binary file (${NAME}) ..."
	@echo ""
	@${RM} -f ${NAME}

re: fclean all

.PHONY: all clean fclean re