# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/15 10:00:18 by gpirozzi          #+#    #+#              #
#    Updated: 2025/09/16 15:19:14 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = main.cpp

all: $(NAME)

$(NAME) : $(SRC)
			$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "Nothing to clean"

fclean:
		-rm -f $(NAME)
		@echo "Removing executable"

re: fclean all

.PHONY: all clean fclean re