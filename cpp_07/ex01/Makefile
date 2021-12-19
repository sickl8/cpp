NAME=a.out
SRC=main.cpp
CC=clang++
FLAGS=-Wall -Wextra -Werror -std=c++98
CCLEAK=~/.brew/Cellar/llvm/12.0.0_1/bin/clang++
all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(NAME).dSYM

fclean: clean
	rm -rf $(NAME)

san: fclean
	ASAN_OPTIONS=detect_leaks=0; $(CC) $(FLAGS) -g -fsanitize=address -o $(NAME) $(SRC)

re: fclean all

run:

leak:
	ASAN_OPTIONS=detect_leaks=1; $(CCLEAK) $(FLAGS) -g -fsanitize=leak -o $(NAME) $(SRC)

.PHONY: all clean fclean re san leak run
