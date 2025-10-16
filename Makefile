# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 21:44:11 by dde-fite          #+#    #+#              #
#    Updated: 2025/10/16 18:57:08 by dde-fite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# *                            LIBFT by dde-fite                             * #
# **************************************************************************** #

# ******************************** VARIABLES  ******************************** #
# FILES
NAME		= libft.a
BONUSSRC	:= $(wildcard ft_lst*.c)
BONUSOBJ 	:= $(patsubst %.c,%.o,$(BONUSSRC))
SRC			:= $(filter-out $(BONUSSRC),$(wildcard ft_*.c))
OBJ			:= $(patsubst %.c,%.o,$(SRC))

# GCC COMPILER
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -c

# AR LIBRARY
AR			= ar
AFLAGS		= rcs
AFLAGSBONUS	= rs

# RM COMMAND
RM			= rm

# ********************************** RULES  ********************************** #
${NAME}: ${SRC}
	@echo "# **************************************************************** #"
	@echo "# *                      LIBFT by dde-fite                       * #"
	@echo "# **************************************************************** #"
	@echo "Compiling libft functions ..."
	@echo ""
	@${CC} ${CFLAGS} $^
	@echo "Archiving objects in ${NAME} ..."
	@echo ""
	@${AR} ${AFLAGS} ${NAME} ${OBJ}
	@echo "Process completed :)"
	@echo ""

all: ${NAME}

clean:
	@echo "Deleting all object files (.o of ft_*.c) ..."
	@echo ""
	@${RM} -rf ${OBJ} ${BONUSOBJ}

fclean: clean
	@echo "Deleting binary file (${NAME}) ..."
	@echo ""
	@${RM} -f ${NAME} .bonus

re: fclean all

.bonus: ${NAME} ${BONUSSRC}
	@echo "Compiling bonus functions ..."
	@echo ""
	@${CC} ${CFLAGS} ${BONUSSRC}
	@echo "Adding objects to ${NAME} ..."
	@echo ""
	@${AR} ${AFLAGSBONUS} ${NAME} ${BONUSOBJ}
	@touch .bonus

bonus: .bonus
	@echo "bonus done.."


.PHONY: all clean fclean re bonus
