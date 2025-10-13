# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 11:34:30 by gpirozzi          #+#    #+#              #
#    Updated: 2025/08/04 13:12:22 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Animals.cpp Cat.cpp Dog.cpp main.cpp WrongAnimals.cpp WrongCat.cpp 

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