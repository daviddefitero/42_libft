# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 21:44:11 by dde-fite          #+#    #+#              #
#    Updated: 2025/10/18 15:55:21 by dde-fite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# *                            LIBFT by dde-fite                             * #
# **************************************************************************** #

# ******************************** VARIABLES  ******************************** #
SHELL := /bin/bash

# FILES
NAME		= libft.a
BONUSSRC	:= $(wildcard ft_lst*.c)
BONUSOBJ 	:= $(patsubst %.c,%.o,$(BONUSSRC))
SRC			:= $(filter-out $(BONUSSRC),$(wildcard ft_*.c))
OBJ			:= $(patsubst %.c,%.o,$(SRC))
TOTAL		:= $(words $(SRC))

# GCC COMPILER
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -c

# AR LIBRARY
AR			= ar
AFLAGS		= rcs
AFLAGSBONUS	= rs

# RM COMMAND
RM			= rm

# COLORS
GREEN		:= \033[1;32m
BLUE		:= \033[1;34m
YELLOW		:= \033[1;33m
PURPLE		:= \033[1;35m
CYAN		:= \033[1;36m
RED			:= \033[1;31m
RESET		:= \033[0m

# BAR
BAR_LEN		:= 100

# ********************************** RULES  ********************************** #
${NAME}: ${SRC}
	@echo -e "${PURPLE}"
	@echo "           _____            _____                    _____                    _____                _____           "
	@echo "          /\    \          /\    \                  /\    \                  /\    \              /\    \          "
	@echo "         /::\____\        /::\    \                /::\    \                /::\    \            /::\    \         "
	@echo "        /:::/    /        \:::\    \              /::::\    \              /::::\    \           \:::\    \        "
	@echo "       /:::/    /          \:::\    \            /::::::\    \            /::::::\    \           \:::\    \       "
	@echo "      /:::/    /            \:::\    \          /:::/\:::\    \          /:::/\:::\    \           \:::\    \      "
	@echo "     /:::/    /              \:::\    \        /:::/__\:::\    \        /:::/__\:::\    \           \:::\    \     "
	@echo "    /:::/    /               /::::\    \      /::::\   \:::\    \      /::::\   \:::\    \          /::::\    \    "
	@echo "   /:::/    /       ____    /::::::\    \    /::::::\   \:::\    \    /::::::\   \:::\    \        /::::::\    \   "
	@echo "  /:::/    /       /\   \  /:::/\:::\    \  /:::/\:::\   \:::\ ___\  /:::/\:::\   \:::\    \      /:::/\:::\    \  "
	@echo " /:::/____/       /::\   \/:::/  \:::\____\/:::/__\:::\   \:::|    |/:::/  \:::\   \:::\____\    /:::/  \:::\____\ "
	@echo " \:::\    \       \:::\  /:::/    \::/    /\:::\   \:::\  /:::|____|\::/    \:::\   \::/    /   /:::/    \::/    / "
	@echo "  \:::\    \       \:::\/:::/    / \/____/  \:::\   \:::\/:::/    /  \/____/ \:::\   \/____/   /:::/    / \/____/  "
	@echo "   \:::\    \       \::::::/    /            \:::\   \::::::/    /            \:::\    \      /:::/    /           "
	@echo "    \:::\    \       \::::/____/              \:::\   \::::/    /              \:::\____\    /:::/    /            "
	@echo "     \:::\    \       \:::\    \               \:::\  /:::/    /                \::/    /    \::/    /             "
	@echo "      \:::\    \       \:::\    \               \:::\/:::/    /                  \/____/      \/____/              "
	@echo "       \:::\    \       \:::\    \               \::::::/    /                                                     "
	@echo "        \:::\____\       \:::\____\               \::::/    /                                                      "
	@echo "         \::/    /        \::/    /                \::/____/                                                       "
	@echo "          \/____/          \/____/                  ~~                                                             "
	@echo -e "${RED}"
	@echo "                                                   by dde-fite                                                   "
	@echo -e "${RESET}"
	@echo "Compiling libft functions ..."
	@echo -e "${YELLOW}"
	@count=0; \
	for f in $(SRC); do \
		$(CC) $(CFLAGS) $$f; \
		count=$$((count + 1)); \
		progress=$$((count * 100 / $(TOTAL))); \
		hashes_len=$$((progress * $(BAR_LEN) / 100)); \
		hashes=$$(printf '%0.s#' $$(seq 1 $$hashes_len)); \
		spaces_len=$$((BAR_LEN - hashes_len)); \
		spaces=$$(printf '%0.s ' $$(seq 1 $$spaces_len)); \
		printf "\r[%s%s] %d%%" "$$hashes" "$$spaces" "$$progress"; \
	done; \
	echo; \

	@echo -e "${RESET}"
	@echo "Archiving objects in ${NAME} ..."
	@echo ""
	@${AR} ${AFLAGS} ${NAME} ${OBJ}
	@echo -e "${GREEN}Process completed :)${RESET}"
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
