# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 14:38:42 by gpirozzi          #+#    #+#              #
#    Updated: 2025/07/20 15:27:58 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = uviolence

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

all: $(NAME)

$(NAME): $(SRC)
		$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "Nothing to clean"

fclean:
		@echo "removing executable"
		-rm -f $(NAME)

re: fclean all

.PHONI: all clean fclean re
