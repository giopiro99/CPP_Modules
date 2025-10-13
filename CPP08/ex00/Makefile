# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/03 12:15:06 by gpirozzi          #+#    #+#              #
#    Updated: 2025/09/03 12:40:14 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
		$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "nothing to clean"

fclean:
		-rm -f $(NAME)
		@echo "removing executable"

re: fclean all

.PHONY: all clean fclean re