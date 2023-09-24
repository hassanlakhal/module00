# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 21:45:16 by hlakhal-          #+#    #+#              #
#    Updated: 2023/09/24 17:36:06 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = PhoneBook.cpp Contact.cpp

CPPFLAG = -Wall -Wextra -Werror

CC = c++ -std=c++98

OBJ = $(SRC:.cpp=.o)

all:phonebook

phonebook:$(OBJ)
			$(CC)	$(CPPFLAG) $(SRC) -o phonebook
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all
