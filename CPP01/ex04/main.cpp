/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:03:11 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/21 14:11:38 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "searchReplace.hpp"

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		fileName = av[1];
		std::ifstream	inputFile(fileName.c_str());
		if (!inputFile)
		{
			std::cout << "Invalid input file" << std::endl;
			return (-1);
		}
		std::string	s1 = av[2];
		if (s1.empty())
		{
			std::cout << "S1 can't be empty" << std::endl;
			return (-2);
		}
		std::ofstream	outFile((fileName + ".replace").c_str());
		if (!outFile)
		{
			std::cout << "Error in .replace file creation" << std::endl;
			return (-3);
		}
		std::string	s2 = av[3];
		searchReplace::replacing(inputFile, outFile, s1, s2);
		inputFile.close();
		outFile.close();
	}
	else
		std::cout << "Invalid input" << std::endl;
}