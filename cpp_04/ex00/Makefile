NAME=a.out
SRC=main.cpp\
Cat.cpp\
WrongCat.cpp\
Dog.cpp\
Animal.cpp\
WrongAnimal.cpp\

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

.PHONY: all clean fclean re