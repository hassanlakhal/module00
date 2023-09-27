# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 22:05:00 by hlakhal-          #+#    #+#              #
#    Updated: 2023/09/27 01:08:30 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

CXXFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.cpp=.o)

CXX = c++ -std=c++98

all:$(NAME)

megaphone:$(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(OBJ) $(NAME)
re:fclean all
