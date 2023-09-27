# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 00:00:24 by hlakhal-          #+#    #+#              #
#    Updated: 2023/09/27 01:08:46 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Account

SRC = Account.cpp tests.cpp

CXXFLAGS = -Wall -Wextra -Werror

CXX = c++ -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

OBJ = $(SRC:.cpp=.o)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
