/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:02:37 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 13:11:19 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimals.hpp"

/*---------------------------Constructors---------------------------*/
WrongAnimal::WrongAnimal() : type("Deafult")
{
	std::cout << "Wrong animal basic constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& other)
{
	std::cout << "Wrong animal copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "Wrong animal init type called" << std::endl;
}

/*---------------------------Operator---------------------------*/

WrongAnimal&	WrongAnimal::operator=(WrongAnimal& other)
{
	std::cout << "Wrong animal operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

/*---------------------------Methods---------------------------*/
std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound....BAU?MIAO?" << std::endl;
}
/*---------------------------Destructor---------------------------*/
WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destructor called" << std::endl;
}