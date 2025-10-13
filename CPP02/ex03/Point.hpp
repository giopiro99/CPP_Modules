/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:18:49 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/22 15:49:25 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
			Fixed const x;
			Fixed const y;
	public:
			Point();
			Point(Fixed const x, Fixed const y);
			Point(Point& other);
			Point& operator=(Point& other);
			Fixed getX( void) const;
			Fixed getY( void) const;
			~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif