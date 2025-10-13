/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:14:24 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/02 10:27:44 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		std::cout << "---------------INT--------------------------" << std::endl;
		Array<int>*	a = new Array<int>(5);
		for (unsigned int i = 0; i < a->size(); i++)
			(*a)[i] = i;
	
		for (unsigned int i = 0; i < a->size(); i++)
			std::cout << (*a)[i] << std::endl;

		std::cout << "---------------STRING--------------------------" << std::endl;
		Array<std::string>*	b = new Array<std::string>(5);
		for (unsigned int i = 0; i < b->size(); i++)
			(*b)[i] = "ciao";
	
		for (unsigned int i = 0; i < b->size(); i++)
			std::cout << (*b)[i] << std::endl;

		std::cout << "---------------NO INIZIALIZATION--------------------------" << std::endl;
		Array<double>*	c = new Array<double>(5);
	
		for (unsigned int i = 0; i < c->size(); i++)
			std::cout << (*c)[i] << std::endl;

		std::cout << "---------------= Operator--------------------------" << std::endl;
		Array<int>	a1(10);
		Array<std::string>	b1(6);
		Array<double>	c1(6000); 
		a1 = *a;
		b1 = *b;
		for (unsigned int i = 0; i < c->size(); i++)
			(*c)[i] = i * 2;
		c1 = *c;
		for (unsigned int i = 0; i < a1.size(); i++)
			std::cout << a1[i] << std::endl;
		for (unsigned int i = 0; i < b1.size(); i++)
			std::cout << b1[i] << std::endl;
		for (unsigned int i = 0; i < c1.size(); i++)
			std::cout << c1[i] << std::endl;
		delete a;
		delete b;
		delete c;
		std::cout << "---------------Out of range--------------------------" << std::endl;
			a1[60] = 10;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}