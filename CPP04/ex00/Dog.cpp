/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:28:10 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 11:59:23 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*---------------------------Constructor---------------------------*/
Dog::Dog() : Animal("Dog")
{
	std::cout << "Basic Dog constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Init Dog type constructor called" << std::endl;
}

Dog::Dog(Dog& other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
}

/*---------------------------Operator---------------------------*/
Dog&	Dog::operator=(Dog& other)
{
	std::cout << "Dog Copy operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

/*---------------------------Methods---------------------------*/

void	Dog::makeSound() const
{
	std::cout << "BauBau I'm a Dog!!" << std::endl;
}

/*---------------------------Desctructor---------------------------*/
Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}