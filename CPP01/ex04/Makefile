# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 17:04:48 by gpirozzi          #+#    #+#              #
#    Updated: 2025/07/21 14:00:34 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sifl

CXX = c++

CXX_FLAG = -Wall -Werror -Wextra -std=c++98 -g

SRC = main.cpp searchReplace.cpp

all: $(NAME)

$(NAME): $(SRC)
				$(CXX) $(CXX_FLAG) $(SRC) -o $(NAME)

clean:
		@echo "Nothing to clean"

fclean:
		rm -f $(NAME)
		@echo "Removing executable"

re: fclean all

.PHONI: all re clean fclean