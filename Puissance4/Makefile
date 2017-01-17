# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksever <ksever@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/17 18:48:34 by ksever            #+#    #+#              #
#    Updated: 2014/03/09 22:37:22 by ksever           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = puissance4
CC = gcc
CFLAG = -Wall -Wextra -Werror
RM = rm -f
INC = -Iinc/ -Ilibft/inc
LIB = -Llibft/ -lft
vpath %.c src/

SRC = main.c
SRC += p4_init.c
SRC += p4_loop.c
SRC += p4_loop_humans.c
SRC += p4_display.c
SRC += p4_play.c
SRC += p4_human_play.c
SRC += p4_IA_play.c
SRC += p4_IA_brain.c
SRC += p4_IA_horiz.c
SRC += p4_IA_vert.c
SRC += p4_IA_diag_one.c
SRC += p4_IA_diag_two.c
SRC += p4_check_win.c
SRC += p4_checks.c
SRC += p4_choose_mode.c

OBJ = $(patsubst %.c, src/%.o, $(SRC))

all: $(NAME)

$(NAME): libft/libft.a $(OBJ) inc/puissance4.h
	@$(CC) $(CFLAGS) $(LIB) $(OBJ) -o $(NAME)
	@echo
	@echo "✅	\033[34mMAKE: Built binary: $(NAME)\033[0m"
	@echo

clean:
	@$(MAKE) -C libft/ $@
	@$(RM) $(OBJ)
	@echo "⭕	\033[31mCLEAN: Cleaned $(NAME) objects\033[0m"

fclean: clean
	@$(MAKE) -C libft/ $@
	@$(RM) $(NAME)
	@echo "⭕	\033[31mFCLEAN: Cleaned $(NAME)\033[0m"

re: fclean all
	@echo "🔄	\033[32mRESET $(NAME): Done.\033[0m"

src/%.o: %.c
	@$(CC) $(CFLAGS)  $(INC) -c $< -o $@
	@echo "🔶	\033[33mCOMPILING: C Object: $< => $@\033[0m"

libft/libft.a:
	@$(MAKE) -C libft/

dev: libft/libft.a $(OBJ) inc/puissance4.h
	clang -g $(CFLAGS) -pedantic  $(INC) $(LIB) -o $(NAME) $(OBJ)
	llvm-gcc -g $(CFLAGS) -ansi -pedantic $(INC) $(LIB) -o $(NAME) $(OBJ)

.PHONY: re fclean clean all dev
