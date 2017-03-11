# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glouyot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/11 12:52:56 by glouyot           #+#    #+#              #
#    Updated: 2017/03/11 13:57:52 by glouyot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AUTHOR		:=	glouyot

NAME		:=	libft.a

FLAGS		:=	-Wall -Werror -Wextra

INCDIR		:=	./include
INC			:=	libft.h	
INCPATH		:=	$(addprefix $(INCDIR)/, $(INC))

SRCDIR		:=	./src

OBJETCS		:=
OBJECTSPATH	:=	$(addprefix $(SRC)/, $(OBJECTS))

all: auteur $(NAME)

%.o: %.c $(INCPATH)
	gcc $(FLAGS) $(INCLUDES) -c $(OBJECTSPATH)

$(NAME):
	ar rc $(NAME) $(OBJECTSPATH)
	ranlib $(NAME)

clean:
	rm -rf $(OBJECTSPATH)

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE) all

auteur:
	echo $(AUTHOR) > auteur

.PHONY: all, clean, fclean, re, auteur
