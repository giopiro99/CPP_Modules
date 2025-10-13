/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:28:29 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/24 14:40:11 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fraction = 8;

/*---------------------------Constructors---------------------------*/
Fixed::Fixed()
{
	this->fixedPoint = 0;
}

Fixed::Fixed( const float floatValue)
{
	this->fixedPoint = roundf((floatValue * (1 << this->_fraction)));
}

Fixed::Fixed( const int intValue)
{
	this->fixedPoint = intValue << this->_fraction;
}

float Fixed::toFloat( void ) const
{
	return ((this->fixedPoint / static_cast<float>(1 << this->_fraction))); //divido x 256 x recuperare i valori dopo la virgola
}

/*---------------------------Operators---------------------------*/
bool	Fixed::operator>(const Fixed& other) const
{
	if (this != &other)
		return (this->fixedPoint > other.fixedPoint);
	return (false);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	if (this != &other)
		return (this->fixedPoint >= other.fixedPoint);
	return (false);
}

bool	Fixed::operator<(const Fixed& other) const
{
	if (this != &other)
		return (this->fixedPoint < other.fixedPoint);
	return (false);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	if (this != &other)
		return (this->fixedPoint <= other.fixedPoint);
	return (false);
}

bool	Fixed::operator==(const Fixed& other) const
{
	if (this != &other)
		return (this->fixedPoint == other.fixedPoint);
	return (false);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	if (this != &other)
		return (this->fixedPoint != other.fixedPoint);
	return (false);
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	result;
	
	result.setRawBits(this->fixedPoint + other.fixedPoint);
	return (result);
}

Fixed	Fixed::operator++( void )
{
	this->fixedPoint += 1;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp = *this;
	this->fixedPoint += 1;
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	result;
	
	result.setRawBits(this->fixedPoint - other.fixedPoint);
	return (result);
}

Fixed	Fixed::operator--( void )
{
	this->fixedPoint -= 1;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp = *this;
	this->fixedPoint -= 1;
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed		result;
	long long	tmp = (long long)this->fixedPoint * other.fixedPoint;
	result.setRawBits((static_cast<int>(tmp)) >> _fraction);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed	result;
	long long tmp = (static_cast<long long>(this->fixedPoint) << _fraction) / static_cast<long long>(other.fixedPoint);//long long per evitare overflow.
	result.setRawBits((static_cast<int>(tmp)));
	return (result);
}

/*---------------------------Methods---------------------------*/
Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

void	Fixed::setRawBits(  int const raw )
{
	this->fixedPoint = raw;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

/*---------------------------Functions---------------------------*/
std::ostream& operator<<(std::ostream& os, const Fixed& FixedClass)
{
	os << FixedClass.toFloat();
	return (os);
}

/*---------------------------Destructor---------------------------*/
Fixed::~Fixed()
{
}


