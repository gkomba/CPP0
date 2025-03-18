NAME=megaphone
SRC=megaphone.cpp
OBJ=$(SRC:.cpp=.o)
CXX=c++
FLAGS=-Wall -Wextra -Werror
CXXFLAGS+=-std=c++98
RM=rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re