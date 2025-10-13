/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:49:34 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/24 14:35:40 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fraction = 8;

/*---------------------------Constructors---------------------------*/
Fixed::Fixed()
{
	std::cout << "Default costructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = other.fixedPoint;
}

/*---------------------------Operators---------------------------*/
Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy operator called" << std::endl;
	if (this != &other)
		this->fixedPoint = other.fixedPoint;
	return (*this);
}

/*---------------------------Methods---------------------------*/
int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

/*---------------------------Destructor---------------------------*/
Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}