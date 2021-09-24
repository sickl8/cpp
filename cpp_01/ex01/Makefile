NAME=zombie
SRC=Zombie.cpp\
ZombieHorde.cpp\
main.cpp
CC=clang++
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(NAME).dSYM

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re