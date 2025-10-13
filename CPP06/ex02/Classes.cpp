/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:16:56 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/10 16:57:57 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"
#include <iostream>
#include <typeinfo>
#include <cstdlib>

Base* generate()
{
	int i = rand() % 3;

	if (i == 0)
		return new (A);
	else if (i == 1)
		return new (B);
	else
		return new (C);
}


void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

static std::string  whoAmI(Base& p)
{
	try
	{
		Base	isA = dynamic_cast<A&>(p);
		return ("A");
	}
	catch(const std::bad_cast& e)
	{
		;
	}
	try
	{
		Base isB = dynamic_cast<B&>(p);
		return ("B");
	}
	catch(const std::bad_cast& e)
	{
		;
	}
	try
	{
			Base isC = dynamic_cast<C&>(p);
			return ("C");
	}
	catch(const std::bad_cast& e)
	{
		;
	}
	return ("");
}

void identify(Base& p)
{
	std::cout << whoAmI(p) << std::endl;
}