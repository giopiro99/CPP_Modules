# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/27 17:00:07 by gpirozzi          #+#    #+#              #
#    Updated: 2025/08/27 17:03:19 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serializer

SRC = main.cpp Serializer.cpp 

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
		$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "nothing to clean"

fclean:
		rm -f $(NAME)
		@echo "removing executable"

re: fclean all

.PHONY: all clean fclean re