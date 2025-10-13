/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:04:12 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 13:27:43 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*---------------------------Constructors---------------------------*/
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat basic constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat init type constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
}

/*---------------------------Operator---------------------------*/
WrongCat	WrongCat::operator=(WrongCat& other)
{
	std::cout << "WrongCat operator = called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

/*---------------------------Methods---------------------------*/
void	WrongCat::makeSound() const
{
	std::cout << "Miaooo WrogCat" << std::endl;
}

/*---------------------------Destructor---------------------------*/
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}


