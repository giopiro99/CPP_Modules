# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/01 10:37:10 by gpirozzi          #+#    #+#              #
#    Updated: 2025/09/01 10:41:08 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

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
