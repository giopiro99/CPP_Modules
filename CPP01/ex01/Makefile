# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/18 12:51:09 by gpirozzi          #+#    #+#              #
#    Updated: 2025/07/18 15:01:39 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombiehorde

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME): $(SRC)
		$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "nothing to clean"

fclean:
		rm -f $(NAME);
		@echo "removing the executable"

re: fclean all

.PHONI: all clean fclean re