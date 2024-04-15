NAME	=	Bureaucrat

SRCS	=	main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp Intern.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJ =	${SRCS:.cpp=.o}

CC =	c++ -g3 -Wall -Wextra -Werror -std=c++98

.c.o:
			$(CC) -cpp $< -o $(<:.cpp=.o)

$(NAME): ${OBJ}
		$(CC) -o $(NAME) ${OBJ}

all:	${NAME}

clean:
		rm -f ${OBJ}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
