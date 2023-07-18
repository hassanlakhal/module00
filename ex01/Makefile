# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 21:45:16 by hlakhal-          #+#    #+#              #
#    Updated: 2023/07/18 22:02:22 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = phonebook.cpp

CPPFLAG = -Wall -Wextra -Werror

CC = c++ -std=c++98

OBJ = $(SRC:.cpp=.o)

all:phonebook

phonebook:$(OBJ)
			$(CC)	$(CPPFLAG) $(SRC) -o phonebook
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(OBJ) $(NAME)
re:fclean all
