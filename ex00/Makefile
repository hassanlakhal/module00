# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 22:05:00 by hlakhal-          #+#    #+#              #
#    Updated: 2023/07/18 22:13:23 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

CPPFLAG = -Wall -Wextra -Werror

OBJ = $(SRC:.cpp=.o)

CC = c++ -std=c++98

all:megaphone

megaphone:$(OBJ)
				$(CC) $(CPPFLAG) $(SRC) -o megaphone
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(OBJ) $(NAME)
re:fclean all
