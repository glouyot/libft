# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glouyot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/27 13:22:03 by glouyot           #+#    #+#              #
#    Updated: 2016/12/12 17:52:13 by glouyot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re, coffee
NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra
CC			= gcc
SRC_PATH	= srcs
SRC_NAME	= utilities/ft_atoi.c			\
			  memory/ft_bzero.c				\
			  utilities/ft_check_base.c		\
			  string/ft_countwords.c		\
			  error/ft_die.c				\
			  is/ft_isalnum.c				\
			  is/ft_isalpha.c				\
			  is/ft_isascii.c				\
			  is/ft_isdigit.c				\
			  is/ft_islower.c				\
			  is/ft_isprint.c				\
			  is/ft_isspace.c				\
			  is/ft_isupper.c				\
			  utilities/ft_itoa.c			\
			  list/ft_lstadd.c				\
			  list/ft_lstat.c				\
			  list/ft_lstcount.c			\
			  list/ft_lstdel.c				\
			  list/ft_lstdelone.c			\
			  list/ft_lstiter.c				\
			  list/ft_lstmap.c				\
			  list/ft_lstnew.c				\
			  memory/ft_memalloc.c			\
			  memory/ft_memccpy.c			\
			  memory/ft_memchr.c			\
			  memory/ft_memcmp.c			\
			  memory/ft_memcpy.c			\
			  memory/ft_memdel.c			\
			  memory/ft_memmove.c			\
			  memory/ft_memrealloc.c		\
			  memory/ft_memset.c			\
			  output/ft_putchar.c			\
			  output/ft_putchar_fd.c		\
			  output/ft_putendl.c			\
			  output/ft_putendl_color.c		\
			  output/ft_putendl_fd.c		\
			  output/ft_putendl_fd_color.c	\
			  output/ft_putnbr.c			\
			  output/ft_putnbr_base.c		\
			  output/ft_putnbr_fd.c			\
			  output/ft_putnbr_fd_base.c	\
			  output/ft_putstr.c			\
			  output/ft_putstr_color.c		\
			  output/ft_putstr_fd.c			\
			  output/ft_putstr_fd_color.c	\
			  string/ft_strcat.c			\
			  string/ft_strcchr.c			\
			  string/ft_strchr.c			\
			  string/ft_strclr.c			\
			  string/ft_strcmp.c			\
			  string/ft_strcpy.c			\
			  string/ft_strdel.c			\
			  string/ft_strdup.c			\
			  string/ft_strequ.c			\
			  string/ft_striter.c			\
			  string/ft_striteri.c			\
			  string/ft_strjoin.c			\
			  string/ft_strjoini.c			\
			  string/ft_strlcat.c			\
			  string/ft_strlen.c			\
			  string/ft_strmap.c			\
			  string/ft_strmapi.c			\
			  string/ft_strncat.c			\
			  string/ft_strncmp.c			\
			  string/ft_strncpy.c			\
			  string/ft_strnequ.c			\
			  string/ft_strnew.c			\
			  string/ft_strnstr.c			\
			  string/ft_strrchr.c			\
			  string/ft_strrealloc.c		\
			  string/ft_strsplit.c			\
			  string/ft_strstr.c			\
			  string/ft_strsub.c			\
			  string/ft_strtrim.c			\
			  string/ft_tolower.c			\
			  string/ft_toupper.c			\
			  utilities/ft_two_comp.c		\
			  utilities/get_next_line.c
OBJ_PATH	= objs
OBJ_NAME	= $(SRC_NAME:.c=.o)
SRC			= $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ			= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
INC_PATH	= includes
CPPFLAGS	= -I$(INC_PATH)

all: $(NAME) coffee

$(NAME): $(OBJ) 
	@ar rc $@ $^
	@ranlib $(NAME)
	@echo "Compilation: \033[1;32mDONE!\033[m"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/is 2> /dev/null || true	
	@mkdir $(OBJ_PATH)/list 2> /dev/null || true
	@mkdir $(OBJ_PATH)/error 2> /dev/null || true
	@mkdir $(OBJ_PATH)/memory 2> /dev/null || true
	@mkdir $(OBJ_PATH)/string 2> /dev/null || true
	@mkdir $(OBJ_PATH)/utilities 2> /dev/null || true
	@mkdir $(OBJ_PATH)/output 2> /dev/null || true
	@$(CC) $(CFLAGS) -c $< $(CPPFLAGS) -o $@

clean:
	@rm -rf $(OBJ_PATH)
	@echo "Clean: \033[1;32mDONE!\033[m"

fclean: clean
	@rm -f $(NAME)
	@echo "Fclean: \033[1;32mDONE!\033[m"

re: fclean all

coffee:
	@echo "  ("
	@echo "  )"
	@echo "c[_]"

norme:
	@norminette $(SRC)
	@norminette $(INC_PATH)/* 
