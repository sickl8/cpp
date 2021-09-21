NAME=weapon
SRC=main.cpp\
Weapon.cpp\
Weapon.hpp\
HumanA.cpp\
HumanA.hpp\
HumanB.cpp\
HumanB.hpp
CC=clang++
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf *.dSYM *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re