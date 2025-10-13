# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/05 16:09:44 by gpirozzi          #+#    #+#              #
#    Updated: 2025/08/05 16:14:36 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interfaces

SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp

CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(SRC)
			$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "nothing to clean"

fclean:
		rm -f $(NAME)
		@echo "removing executable"

re: fclean all

.PHONY: all clean fclean re