NAME=a.out
SRC=main.cpp\
Fixed.cpp\
Point.cpp\
Line.cpp\
bsp.cpp
CC=clang++
FLAGS=-Wall -Wextra -Werror -std=c++98 -DDEBUG

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