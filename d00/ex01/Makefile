
NAME = phonebook
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
SRC = main.cpp \
	Sub_system.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	@rm -rf $(OBJ) phonebook.o

fclean:
	@rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
