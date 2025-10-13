# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/17 17:07:48 by gpirozzi          #+#    #+#              #
#    Updated: 2025/07/18 11:48:44 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = dreamjob
CXX = c++
CXX_FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = Account.cpp tests.cpp
all: $(NAME)

$(NAME): $(SRC)
		$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "Nothing to clean"

fclean:
	rm -f $(NAME)
	@echo "Removing executable"

re:fclean all

.PHONY: all clean fclean re
