NAME		= libft.a
SRC			= $(shell ls | grep -E "ft_")
FLAGS		= -Wall -Werror -Wextra
CC			= gcc
OBJ			= $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c -I ./ $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
