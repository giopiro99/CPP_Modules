/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:28:10 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/01 14:41:36 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*---------------------------Constructor---------------------------*/
Dog::Dog() : Animal("Dog")
{
	std::cout << "Basic Dog constructor called" << std::endl;
	this->DogBrain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Init Dog type constructor called" << std::endl;
	this->DogBrain = new Brain();
}

Dog::Dog(Dog& other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = other.type;
	DogBrain = new Brain(*other.DogBrain);
}

/*---------------------------Operator---------------------------*/
Dog&	Dog::operator=(Dog& other)
{
	std::cout << "Dog Copy operator called" << std::endl;
	if (this != &other)
	{
		delete (this->DogBrain);
		DogBrain = new Brain(*other.DogBrain);
	}
	return (*this);
}

/*---------------------------Methods---------------------------*/

void	Dog::makeSound() const
{
	std::cout << "BauBau I'm a Dog!!" << std::endl;
}

void	Dog::getDogIdea()
{
	this->DogBrain->getIdeas();
}

void	Dog::setDogIdea(std::string idea)
{
	this->DogBrain->setIdea(idea);
}

/*---------------------------Desctructor---------------------------*/
Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete(this->DogBrain);
}