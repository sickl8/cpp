NAME=karen
SRC=Makefile\
main.cpp\
Karen.hpp\
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

re: fclean all

.PHONY: all clean fclean re