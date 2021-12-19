NAME=a.out
SRC=main.cpp
CC=clang++
FLAGS=-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(NAME).dSYM

fclean: clean
	rm -rf $(NAME)

san: fclean
	$(CC) $(FLAGS) -g -fsanitize=address -o $(NAME) $(SRC)

re: fclean all

run:

leak:

.PHONY: all clean fclean re san leak run
