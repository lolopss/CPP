NAME = PmergeMe
CC = c++ -Wall -Wextra -Werror -std=c++98 -g3
SRC = main.cpp PmergeMe.cpp
OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re : fclean all