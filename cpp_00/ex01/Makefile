
CC=clang++
FLAGS=-Wall -Wextra -Werror -std=c++98
SRC=PhoneBook.cpp Contact.cpp
REQ=$(SRC) PhoneBook.hpp Contact.hpp
NAME=phonebook

$(NAME): $(REQ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -rf a.out

fclean: clean
	rm -rf $(NAME)

re: fclean all