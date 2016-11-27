# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glouyot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/27 13:22:03 by glouyot           #+#    #+#              #
#    Updated: 2016/11/27 16:03:17 by glouyot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re
NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra
CC			= gcc
SRC_PATH	= src
SRC_NAME	= ft_atoi.c				\
			  ft_bzero.c			\
			  ft_countwords.c		\
			  ft_die.c				\
			  ft_isalnum.c			\
			  ft_isalpha.c			\
			  ft_isascii.c			\
			  ft_isdigit.c			\
			  ft_islower.c			\
			  ft_isprint.c			\
			  ft_isspace.c			\
			  ft_isupper.c			\
			  ft_itoa.c				\
			  ft_lstadd.c			\
			  ft_lstat.c			\
			  ft_lstcount.c			\
			  ft_lstdel.c			\
			  ft_lstdelone.c		\
			  ft_lstiter.c			\
			  ft_lstmap.c			\
			  ft_lstnew.c			\
			  ft_memalloc.c			\
			  ft_memccpy.c			\
			  ft_memchr.c			\
			  ft_memcmp.c			\
			  ft_memcpy.c			\
			  ft_memdel.c			\
			  ft_memmove.c			\
			  ft_memrealloc.c		\
			  ft_memset.c			\
			  ft_putchar.c			\
			  ft_putchar_fd.c		\
			  ft_putendl.c			\
			  ft_putendl_color.c	\
			  ft_putendl_fd.c		\
			  ft_putendl_fd_color.c	\
			  ft_putnbr.c			\
			  ft_putnbr_fd.c		\
			  ft_putstr.c			\
			  ft_putstr_color.c		\
			  ft_putstr_fd.c		\
			  ft_putstr_fd_color.c	\
			  ft_strcat.c			\
			  ft_strchr.c			\
			  ft_strclr.c			\
			  ft_strcmp.c			\
			  ft_strcpy.c			\
			  ft_strdel.c			\
			  ft_strdup.c			\
			  ft_strequ.c			\
			  ft_striter.c			\
			  ft_striteri.c			\
			  ft_strjoin.c			\
			  ft_strjoini.c			\
			  ft_strlcat.c			\
			  ft_strlen.c			\
			  ft_strmap.c			\
			  ft_strmapi.c			\
			  ft_strncat.c			\
			  ft_strncmp.c			\
			  ft_strncpy.c			\
			  ft_strnequ.c			\
			  ft_strnew.c			\
			  ft_strnstr.c			\
			  ft_strrchr.c			\
			  ft_strrealloc.c		\
			  ft_strsplit.c			\
			  ft_strstr.c			\
			  ft_strsub.c			\
			  ft_strtrim.c			\
			  ft_tolower.c			\
			  ft_toupper.c
OBJ_PATH	= obj
OBJ_NAME	= $(SRC_NAME:.c=.o)
SRC			= $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ			= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
INC_PATH	= include
CPPFLAGS	= -I$(INC_PATH)

all: $(NAME)

$(NAME): $(OBJ) 
	@ar rc $@ $^
	@ranlib $(NAME)
	@echo "Compilation: \033[1;32mDONE!\033[m"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -c $< $(CPPFLAGS) -o $@

clean:
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "Clean: \033[1;32mDONE!\033[m"

fclean: clean
	@rm -f $(NAME)
	@echo "Fclean: \033[1;32mDONE!\033[m"

re: fclean all

norme:
	norminette $(SRC) | grep "Error" -B1
	norminette $(INC_PATH)/*.h
