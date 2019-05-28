# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minakim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/05 03:44:43 by minakim           #+#    #+#              #
#    Updated: 2019/05/05 20:2:48 by minakim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp
OBJ = $(SRC:.cpp=.o)
all: $(NAME)
$(NAME):
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	@rm -rf $(OBJ) main.o

fclean:
	@rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
