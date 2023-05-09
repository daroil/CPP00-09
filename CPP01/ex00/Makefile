CC = c++ -Wall -Wextra -Werror -std=c++98

SRC := phonebook.cpp \
		main.cpp \
		contact.cpp
NAME := phonebook

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

# %.o: %.c
# 	$(CC) -c $^ -o $@
clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re