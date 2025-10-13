# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/06 11:37:34 by gpirozzi          #+#    #+#              #
#    Updated: 2025/08/07 17:34:19 by gpirozzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

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