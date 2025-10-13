# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/21 11:06:56 by gpirozzi          #+#    #+#              #
#    Updated: 2025/07/21 11:52:51 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = Harl.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
		$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "nothing to clean"

fclean:
	rm -f $(NAME)
	@echo "removing executable"

re: fclean all

.PHONI: all clean fclean re