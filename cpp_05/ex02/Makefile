NAME=a.out
SRC=Bureaucrat.cpp\
ExecOnUnsignedForm.cpp\
Form.cpp\
GradeTooHighException.cpp\
GradeTooLowException.cpp\
PresidentialPardonForm.cpp\
RobotomyRequestForm.cpp\
ShrubberyCreationForm.cpp\
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

san: fclean
	$(CC) $(FLAGS) -g -fsanitize=address -o $(NAME) $(SRC)

re: fclean all

.PHONY: all clean fclean re