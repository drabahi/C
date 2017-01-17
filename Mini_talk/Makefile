# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drabahi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/08 19:01:18 by drabahi           #+#    #+#              #
#    Updated: 2014/08/21 23:47:37 by drabahi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = minitalk
NAME_CLIENT = client
NAME_SERVER = server
LIBS = -lft
FTLIBS = libft.a

LIB_DIR = libft
SOURCES_DIR = srcs
INCLUDES_DIR = includes

ifeq ($(DEBUG), 1)
	FLAGS = -g -Wall -Wextra -pedantic
	CC = cc
else
	FLAGS = -Wall -Werror -Wextra -ansi -pedantic -std=c89
endif

ifeq ($(STRICT), 1)
	FLAGS += -fstack-protector-all -Wshadow -Wunreachable-code \
			 -Wstack-protector -pedantic-errors -O0 -W -Wundef -fno-common \
			 -Wfatal-errors -Wstrict-prototypes -Wmissing-prototypes \
			 -Wwrite-strings -Wunknown-pragmas -Wdeclaration-after-statement \
			 -Wold-style-definition -Wmissing-field-initializers \
			 -Wpointer-arith -Wnested-externs -Wstrict-overflow=5 -fno-common \
			 -Wno-missing-field-initializers -Wswitch-default -Wswitch-enum \
			 -Wbad-function-cast -Wredundant-decls -fno-omit-frame-pointer \
			 -Wfloat-equal
	endif

CFLAGS =  $(FLAGS) -I $(INCLUDES_DIR) -I ./$(LIB_DIR)/includes
LDFLAGS = -L $(LIB_DIR) $(LIBS)

DEPENDENCIES = \
			   $(INCLUDES_DIR)/common.h \
			   $(INCLUDES_DIR)/client.h \
			   $(INCLUDES_DIR)/server.h

SOURCES_CLIENT = \
				 $(SOURCES_DIR)/client.c \
				 $(SOURCES_DIR)/client2.c

SOURCES_SERVER = \
				 $(SOURCES_DIR)/server.c \
				 $(SOURCES_DIR)/server2.c

OBJS_CLIENT = $(SOURCES_CLIENT:.c=.o)
OBJS_SERVER = $(SOURCES_SERVER:.c=.o)

all: $(NAME)

$(NAME): $(NAME_CLIENT) $(NAME_SERVER)

%.o: %.c $(DEPENDENCIES)
	@$(CC) -c $< -o $@ $(CFLAGS) 

$(NAME_CLIENT): $(OBJS_CLIENT) lib
	@echo Creating $(NAME_CLIENT)...
	@$(CC) -o $(NAME_CLIENT) $(OBJS_CLIENT) $(LDFLAGS)

$(NAME_SERVER): $(OBJS_SERVER) lib
	@echo Creating $(NAME_SERVER)...
	@$(CC) -o $(NAME_SERVER) $(OBJS_SERVER) $(LDFLAGS)

lib:
	@make $(FTLIBS) -C $(LIB_DIR)

clean:
	@make clean -C $(LIB_DIR)
	@rm -f $(OBJS_CLIENT)
	@rm -f $(OBJS_SERVER)
	@echo Deleting $(NAME_CLIENT) OBJECTS files...
	@echo Deleting $(NAME_SERVER) OBJECTS files...

fclean: clean
	@make fclean -C $(LIB_DIR)
	@rm -f $(NAME_CLIENT)
	@rm -f $(NAME_SERVER)
	@echo Deleting $(NAME_CLIENT)...
	@echo Deleting $(NAME_SERVER)...

re: fclean all

.PHONY: clean fclean re all lib test
