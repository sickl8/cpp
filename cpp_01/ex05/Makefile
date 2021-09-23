NAME=karen
SRC=main.cpp\
Karen.cpp
CC=clang++
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf *.dSYM *.o

fclean: clean
	rm -rf $(NAME)

san: fclean
	$(CC) $(SRC) $(FLAGS) -g -fsanitize=address -o $(NAME)

re: fclean all

.PHONY: all clean fclean re san