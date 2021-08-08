 
CC=clang++
STD=-std=c++98
FLAGS=-Wall -Wextra -Werror $(STD)
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