NAME=zombie
SRC=Zombie.cpp\
ZombieHorde.cpp\
main.cpp
CC=clang++
FLAGS=-Wall -Wextra -Werror -fsanitize=address -g

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf *.dSYM *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re