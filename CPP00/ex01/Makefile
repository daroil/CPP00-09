CC = g++ -Wall -Wextra -Werror

SRC := phonebook.cpp \
		main.cpp
NAME := phonebook

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

# %.o: %.c
# 	$(CC) -c $^ -o $@

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re