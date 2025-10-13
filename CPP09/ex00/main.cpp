/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 09:33:47 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/10/08 10:27:32 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

int main(int ac, char** av)
{
	BitCoinExhange	bitcoin = BitCoinExhange();

	try
	{
		if (ac == 2)
		{
			std::ifstream	inputFile(av[1]);
			std::string		currentLine;

			if (!inputFile)
				throw
					std::invalid_argument("invalid file");
			while(getline(inputFile, currentLine))
			{
				if (currentLine == "data | value" || currentLine.empty())
					;
				else
					bitcoin.findPrice(currentLine);
			}
		}
		else
			throw
				std::invalid_argument("invalid input detected");
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}