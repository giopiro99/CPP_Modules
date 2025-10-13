/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:24:58 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/22 19:15:03 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	getLevelIndex(int *levelIndex, std::string input)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (input == levels[i])
		{
			*levelIndex = i;
			break ;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Invalid args" << std::endl;
		return (-1);
	}
	Harl	harlClass;
	int		levelIndex = -1;
	std::string	input = av[1];
	getLevelIndex(&levelIndex, input);
	switch (levelIndex)
	{
		case 0:
			harlClass.complain(0);
		case 1:
			harlClass.complain(1);
		case 2:
			harlClass.complain(2);
		case 3:
			harlClass.complain(3);
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}
