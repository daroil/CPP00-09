
CC = c++ -Wall -Wextra -Werror -std=c++98

SRC := main.cpp \
		ScalarConverter.cpp \

NAME := ex00

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re