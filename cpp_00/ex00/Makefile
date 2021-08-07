
CC=clang++
FLAGS=-Wall -Wextra -Werror -std=c++98
SRC=megaphone.cpp
NAME=megaphone

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -rf a.out

fclean: clean
	rm -rf $(NAME)

re: fclean all