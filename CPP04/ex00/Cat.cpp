/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:26:33 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 11:59:35 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*---------------------------Constructor---------------------------*/
Cat::Cat() : Animal("Cat")
{
	std::cout << "Basic Cat constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Init Cat type constructor called" << std::endl;
}

Cat::Cat(Cat& other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
}

/*---------------------------Operator---------------------------*/
Cat&	Cat::operator=(Cat& other)
{
	std::cout << "Cat Copy operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

/*---------------------------Methods---------------------------*/
void	Cat::makeSound() const
{
	std::cout << "Miaoooo I'm a Cat!!" << std::endl;
}

/*---------------------------Desctructor---------------------------*/
Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}