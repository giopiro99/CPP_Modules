# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/21 17:23:53 by gpirozzi          #+#    #+#              #
#    Updated: 2025/07/21 17:32:23 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRC = Fixed.cpp main.cpp

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
			$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "Nothing to clean"

fclean:
		rm -f $(NAME)
		@echo "Removing executable"

re: fclean all

.PHONY: all clean fclean re