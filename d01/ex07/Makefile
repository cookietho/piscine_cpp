# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minakim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 18:51:22 by minakim           #+#    #+#              #
#    Updated: 2019/04/30 18:51:26 by minakim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
SRC = replace.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	@rm -rf $(OBJ) replace.o

fclean:
	@rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
