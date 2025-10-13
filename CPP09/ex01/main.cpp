/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:08:39 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/12 16:26:27 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iomanip>
#include <iostream>

int main(int ac, char** av)
{
	if (ac == 2)
	{
		std::cout << std::fixed << std::setprecision(2);
		RNP	toCalculate;
		try
		{
			double result = toCalculate.calculation(av[1]);
			std::cout << result << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
			std::cerr << "Invalid input" << std::endl;
}