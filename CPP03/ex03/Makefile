# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 16:22:09 by gpirozzi          #+#    #+#              #
#    Updated: 2025/07/24 12:27:03 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = ScavTrap.cpp ClapTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp


all: $(NAME)

$(NAME): $(SRC)
			$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "Nothing to clean"

fclean:
		rm -f $(NAME)
		@echo "Cleaning executable"

re: fclean all

.PHONY: all re fclean clean
