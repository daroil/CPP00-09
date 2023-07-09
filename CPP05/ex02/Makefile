CC = c++ -Wall -Wextra -Werror -std=c++98

SRC := main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \

NAME := ex01

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re