# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 09:30:34 by gpirozzi          #+#    #+#              #
#    Updated: 2025/09/09 10:41:17 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98 -g -O0

SRC = main.cpp BitcoinExchange.cpp

all: $(NAME)

$(NAME): $(SRC)
		$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "nothing to clean"

fclean:
		-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re