NAME	=	Brain

SRCS	=	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ =	${SRCS:.cpp=.o}

CC =	c++ -g3

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

.c.o:
			$(CC) $(CFLAGS) -cpp $< -o $(<:.cpp=.o)

$(NAME): ${OBJ}
		$(CC) $(CFLAGS) -o $(NAME) ${OBJ}

all:	${NAME}

clean:
		rm -f ${OBJ}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
