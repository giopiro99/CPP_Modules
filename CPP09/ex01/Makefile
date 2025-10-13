# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/11 12:13:26 by gpirozzi          #+#    #+#              #
#    Updated: 2025/09/11 12:24:18 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = main.cpp RPN.cpp

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