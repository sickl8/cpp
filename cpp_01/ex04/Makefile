NAME=replace
SRC=main.cpp
CC=clang++
FLAGS=-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf *.dSYM *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re