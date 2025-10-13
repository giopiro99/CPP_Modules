# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/21 15:39:32 by gpirozzi          #+#    #+#              #
#    Updated: 2025/09/01 11:37:10 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = converter

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -g -std=c++98

SRC = main.cpp ScalarConverter.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "Nothing to clean"

fclean:
	@echo "Removing executable"
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
		