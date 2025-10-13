/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:03:22 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/05 15:40:16 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vect;

	try
	{
		vect.push_back(2);
		vect.push_back(3);
		vect.push_back(4);
		vect.push_back(5);
		vect.push_back(6);
		vect.push_back(7);
		vect.push_back(8);
		easyfind(&vect, -5);
		std::cout << "Found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		vect.push_back(-2);
		vect.push_back(-3);
		vect.push_back(4888888);
		vect.push_back(5777);
		vect.push_back(6888);
		vect.push_back(7999);
		vect.push_back(8909090);
		easyfind(&vect, -2);
		std::cout << "Found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}