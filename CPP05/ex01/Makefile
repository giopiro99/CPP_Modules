# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/06 11:37:34 by gpirozzi          #+#    #+#              #
#    Updated: 2025/08/06 16:48:06 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

SRC = main.cpp Bureaucrat.cpp Form.cpp

CXX = c++

CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME) : $(SRC)
			$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
		@echo "nothing to clean"

fclean:
		rm -f $(NAME)
		@echo "Removing executable"

re: fclean all

.PHONY: all clean fclean re