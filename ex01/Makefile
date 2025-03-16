NAME=phonebook
SRC=PhoneBook.cpp\
	Contact.cpp\
	main.cpp\

OBJS=${SRC:.cpp=.o}
FLAGS=-Wall -Wextra -Werror
CPPFLAGS=-std=c++98
CPP=c++

all: ${NAME}

${NAME}: ${OBJS}
	${CPP} ${FLAGS} ${CPPFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
