# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/21 13:49:44 by gpirozzi          #+#    #+#              #
#    Updated: 2025/07/21 16:14:09 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRC = Fixed.cpp main.cpp

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98 -g

all: $(NAME)

$(NAME): $(SRC)
		$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "Nothing to clean"

fclean:
		rm -f $(NAME)
		@echo "Removing executable"

re: fclean all

.PHONI: all clean fclean re