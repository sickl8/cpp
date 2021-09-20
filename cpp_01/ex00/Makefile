NAME=zombie
SRC=main.cpp\
Zombie.cpp\
newZombie.cpp\
randomChump.cpp
FLAGS=-Wall -Wextra -Werror -std=c++98
CC=clang++

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf *.dSYM *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
