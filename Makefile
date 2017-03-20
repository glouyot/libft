# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glouyot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/11 12:52:56 by glouyot           #+#    #+#              #
#    Updated: 2017/03/20 10:58:23 by glouyot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AUTHOR		:=	glouyot

NAME		:=	libft.a

FLAGS		:=	-Wall -Werror -Wextra

INC			:=	./include/libft.h	
INCLUDES	:= -I./include/

OBJECTS		:= src/string/ft_strdup.o\

all: auteur $(NAME)

%.o: %.c $(INC)
	gcc $(FLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE) all

auteur:
	echo $(AUTHOR) > auteur

.PHONY: all, clean, fclean, re, auteur
