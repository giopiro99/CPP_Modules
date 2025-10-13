/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:57:41 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 12:18:26 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animals.hpp"

/*---------------------------Constructor---------------------------*/
Animal::Animal() : type("default")
{
	std::cout << "Basic Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Init Animal type constructor called" << std::endl;
}

Animal::Animal(Animal& other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
}

/*---------------------------Operator---------------------------*/
Animal&	Animal::operator=(Animal& other)
{
	std::cout << "Animal Copy operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}
/*---------------------------Methods---------------------------*/
void	Animal::makeSound() const
{
	std::cout << "No sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

/*---------------------------Desctructor---------------------------*/
Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}