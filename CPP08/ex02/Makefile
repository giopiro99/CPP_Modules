# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/03 16:39:11 by gpirozzi          #+#    #+#              #
#    Updated: 2025/09/03 16:39:35 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mstack

SRC = main.cpp

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
		$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "Nothing to clean"

fclean:
		-rm -f $(NAME)
		@echo "Removing executable"

re: fclean all

.PHONY: all clean fclean re