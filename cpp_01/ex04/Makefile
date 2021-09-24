NAME=replace
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
	$(CC) $(SRC) $(FLAGS) -g3 -fsanitize=address -o $(NAME)

re: fclean all

.PHONY: all clean fclean re