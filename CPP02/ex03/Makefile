# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 11:26:57 by gpirozzi          #+#    #+#              #
#    Updated: 2025/08/06 11:19:12 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex03

SRC = Fixed.cpp main.cpp Point.cpp bsp.cpp

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