# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 14:03:13 by gpirozzi          #+#    #+#              #
#    Updated: 2025/07/16 17:43:04 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CXX = c++
CXX_FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = phonebook.cpp contact.cpp main.cpp
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