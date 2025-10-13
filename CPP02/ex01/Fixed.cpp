/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:35:46 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/23 09:57:28 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fraction = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(floatValue * (1 << this->_fraction)); //moltiplico x 256 x recuperare i valori dopo la virgola
}

Fixed::Fixed(const int intValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = intValue << this->_fraction;
}
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		this->fixedPoint = other.fixedPoint;
}
Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy operator called" << std::endl;
	if (this != &other)
		this->fixedPoint = other.fixedPoint;
	return (*this);
}

float Fixed::toFloat( void ) const
{
	return ((this->fixedPoint / static_cast<float>(1 << this->_fraction))); //divido x 256 x recuperare i valori dopo la virgola
}

int	Fixed::toInt( void ) const
{
	return (this->fixedPoint >> this->_fraction);
}

std::ostream& operator<<(std::ostream& os, const Fixed& FixedClass)
{
	os << FixedClass.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}