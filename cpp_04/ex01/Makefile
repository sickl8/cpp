NAME=a.out
SRC=main.cpp\
Cat.cpp\
WrongCat.cpp\
Dog.cpp\
Animal.cpp\
WrongAnimal.cpp\
Brain.cpp
CC=clang++
CCLEAK = ~/.brew/Cellar/llvm/12.0.0_1/bin/clang++
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

leak: fclean
	$(CCLEAK) $(FLAGS) -g -fsanitize=leak -o $(NAME) $(SRC); ASAN_OPTIONS=detect_leaks=1

re: fclean all

.PHONY: all clean fclean re