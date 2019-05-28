# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minakim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/06 01:16:27 by minakim           #+#    #+#              #
#    Updated: 2019/05/08 02:22:03 by minakim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
SRC = whatever.cpp
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
