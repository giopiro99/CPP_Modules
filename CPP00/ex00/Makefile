# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 13:42:50 by gpirozzi          #+#    #+#              #
#    Updated: 2025/07/16 14:01:14 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++
CXX_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC) 
	$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "nothing to clean"

fclean: clean
	@rm -f $(NAME)
	@echo "removing executable"

re: fclean all

.PHONY: all clean fclean re
