 
CC=clang++
FLAGS=-Wall -Wextra -Werror -std=c++98
SRC=Account.cpp tests.cpp
REQ=$(SRC) Account.hpp
NAME=test

$(NAME): $(REQ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -rf a.out

fclean: clean
	rm -rf $(NAME)

re: fclean all