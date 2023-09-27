# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 21:45:16 by hlakhal-          #+#    #+#              #
#    Updated: 2023/09/27 01:07:36 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = PhoneBook.cpp Contact.cpp

CXXFLAGS = -Wall -Wextra -Werror

CXX = c++ -std=c++98

OBJ = $(SRC:.cpp=.o)

all:phonebook

phonebook:$(OBJ)
			$(CXX)	$(CXXFLAGS) $(SRC) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all
