/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:33:45 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/01 14:37:16 by gpirozzi         ###   ########.fr       */
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

/*---------------------------Methods---------------------------*/
void	Brain::setIdea(std::string idea)
{
	static int	i = 0;

	if (i == 99)
		return ;
	this->ideas[i] = idea;
}

void	Brain::getIdeas()
{
	for (int i = 0; i < 100; i++)
	{
		if (!ideas[i].empty())
			std::cout << ideas[i] << std::endl;
	}
}

/*---------------------------Destructor---------------------------*/
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}