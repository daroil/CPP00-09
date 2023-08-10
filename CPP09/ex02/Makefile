
CC = c++ -Wall -Wextra -Werror -std=c++98

SRC := helper.cpp \
		helper2.cpp \


NAME := PmergeMe

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