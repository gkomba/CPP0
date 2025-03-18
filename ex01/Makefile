NAME=phonebook
SRC=PhoneBook.cpp\
	Contact.cpp\
	main.cpp\

OBJS=${SRC:.cpp=.o}
FLAGS=-Wall -Wextra -Werror
CPPFLAGS=-std=c++98
CXX=c++

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${FLAGS} ${CPPFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
