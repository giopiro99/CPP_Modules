# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/29 17:14:00 by gpirozzi          #+#    #+#              #
#    Updated: 2025/09/09 17:25:37 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base

SRC = Classes.cpp main.cpp

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME): $(SRC)
			$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
		@echo "nothing to clean"

fclean:
		rm -f $(NAME)
		@echo "removing executable"

re: fclean all

.PHONY: all clean fclean re