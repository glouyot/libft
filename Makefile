# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/23 11:54:29 by glouyot           #+#    #+#              #
#    Updated: 2017/04/03 14:19:43 by glouyot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


AUTHOR		:=	glouyot

NAME		:=	libft.a

FLAGS		:=	-Wall -Werror -Wextra

INC			:=	./includes/libft.h	
INCLUDES	:= -I./includes/

OBJECTS		:= 	srcs/string/ft_strdup.o\
				srcs/string/ft_strnew.o\
				srcs/memory/ft_memalloc.o\
				srcs/memory/ft_memset.o\
				srcs/string/ft_strlen.o\
				srcs/type/ft_isalnum.o\
				srcs/type/ft_isalpha.o\
				srcs/type/ft_isascii.o\
				srcs/type/ft_isdigit.o\
				srcs/type/ft_islower.o\
				srcs/type/ft_isprint.o\
				srcs/type/ft_isspace.o\
				srcs/type/ft_isupper.o\
				srcs/stdlib/ft_atoi.o\
				srcs/stdlib/ft_itoa.o\

all: $(NAME)

%.o: %.c $(INC)
	gcc $(FLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(OBJECTS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean
	$(MAKE) all

auteur:
	echo $(AUTHOR) > auteur

.PHONY: all, clean, fclean, re, auteur
