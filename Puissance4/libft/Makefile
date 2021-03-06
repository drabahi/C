# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksever <ksever@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 13:43:22 by ksever            #+#    #+#              #
#    Updated: 2014/03/07 20:55:21 by ksever           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

vpath %.c src/

SRC = ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c
SRC += ft_memmove.c ft_memchr.c ft_memcmp.c ft_memalloc.c
SRC += ft_memdel.c
SRC += ft_strlen.c ft_strclen.c ft_strdup.c
SRC += ft_strcpy.c ft_strncpy.c
SRC += ft_strcat.c ft_strncat.c ft_strlcat.c
SRC += ft_strchr.c ft_strrchr.c
SRC += ft_strstr.c ft_strnstr.c
SRC += ft_strcmp.c ft_strncmp.c
SRC += ft_strnew.c ft_strdel.c ft_strclr.c
SRC += ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c
SRC += ft_strequ.c ft_strnequ.c ft_strsub.c ft_strtrim.c
SRC += ft_strsplit.c ft_strsplit_clean.c ft_strrev.c
SRC += ft_strjoin.c ft_strjoinwithglue.c
SRC += ft_toupper.c ft_tolower.c
SRC += ft_rotalnum.c
SRC += ft_atoi.c ft_atod.c
SRC += ft_itoa.c ft_itoa_base.c ft_itoa_base_unsigned.c
SRC += ft_nbrmag.c ft_nbrmag_unsigned.c
SRC += ft_nbrlen.c ft_nbrlen_unsigned.c
SRC += ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c
SRC += ft_isprint.c ft_isspace.c
SRC += ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c
SRC += ft_putnstr.c
SRC += ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c
SRC += ft_putnbr_base.c ft_putnbr_base_unsigned.c
SRC += ft_putaddress.c ft_putaddress_fd.c
SRC += ft_errors.c
SRC += ft_get_next_line.c
SRC += ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstprepend.c
SRC += ft_lstappend.c ft_lstcount.c ft_lstprevious.c
SRC += ft_lstswap.c ft_lstiter.c ft_lstmap.c
SRC += ft_fs_isdotordotdot.c ft_fs_path_isvalid.c
SRC += ft_fs_path_join.c ft_fs_path_dirname.c
SRC += ft_degtorad.c ft_sin.c ft_cos.c ft_abs.c

OBJ = $(patsubst %.c, src/%.o, $(SRC))

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: $(NAME)

.PHONY: all clean fclean re

$(NAME): $(OBJ) inc/libft.h
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo
	@echo "✅	\033[34mMAKE: Built binary: $(NAME)\033[0m"
	@echo

clean:
	@$(RM) $(OBJ)
	@echo "⭕	\033[31mCLEAN: Cleaned $(NAME) objects\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "⭕	\033[31mFCLEAN: Cleaned $(NAME)\033[0m"

re: fclean all
	@echo "🔄	\033[32mRESET $(NAME): Done.\033[0m"

src/%.o: %.c
	@echo "🔶	\033[33mCOMPILING: C Object: $< => $@\033[0m"
	@$(CC) -c $(CFLAGS) -I inc/ $< -o $@
