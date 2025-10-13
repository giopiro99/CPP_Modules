/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:33:45 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 14:13:09 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*---------------------------Constructors---------------------------*/
Brain::Brain()
{
	std::cout << "Basic Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

/*---------------------------Operator---------------------------*/
Brain& Brain::operator=(Brain& other)
{
	std::cout << "Brain operator = called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

/*---------------------------Destructor---------------------------*/
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}