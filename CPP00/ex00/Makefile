CC = g++ -Wall -Wextra -Werror

SRC := megaphone.cpp
NAME := megaphone

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