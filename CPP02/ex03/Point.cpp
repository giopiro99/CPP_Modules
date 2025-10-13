/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:19:08 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/24 14:41:03 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*---------------------------Constructor---------------------------*/
Point::Point() : x(0), y(0)
{
}

Point::Point(Fixed const x, Fixed const y) : x(x), y(y)
{
}

Point::Point(Point& other) : x(other.x), y(other.y)
{
}

/*---------------------------Operator---------------------------*/
Point& Point::operator=(Point& other)
{
	if (this != &other)
		std::cerr << "Warning: Assignment operator called, but x and y are const and cannot be reassigned." << std::endl;
	return *this;
}

/*---------------------------Methods---------------------------*/
Fixed Point::getX( void ) const
{
	return (this->x);
}

Fixed Point::getY( void ) const
{
	return (this->y);
}

/*---------------------------Destructor---------------------------*/
Point::~Point()
{
}
