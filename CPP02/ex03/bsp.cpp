/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:42:52 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/23 15:43:48 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*Prodotto vettoriale per capire l orientamento FORMULA=>   sign(AB, AP)=(Bx - Ax)(Py - Ay) - (By - Ay)(Px - Ax)*/
Fixed sign(Point const &p1, Point const &p2, Point const &p3)
{
	return (((p1.getX() - p3.getX())
		* (p2.getY() - p3.getY()))
			- ((p2.getX() - p3.getX())
			* (p1.getY() - p3.getY())));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	d1 = sign(point, a, b);
	Fixed	d2 = sign(point, b, c);
	Fixed	d3 = sign (point, c, a);

	//controllo se tutti i risultati hanno lo stesso segno
	bool	has_negative = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool	has_positive = (d1 > 0) || (d2 > 0) || (d3 > 0);

	//Point e' su un bordo
	if (d1 == 0 || d2 == 0 || d3 == 0)
		return (false);
	//inverto il risulato se has_neg = true e has_pos = true il punto non e' nel triangolo se invece gli d hanno tutti lo stesso segno lo e'
	return !(has_negative && has_positive);
}