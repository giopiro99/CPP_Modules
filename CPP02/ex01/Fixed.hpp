/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:36:12 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/23 09:58:15 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CPP
# define FIXED_CPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int					fixedPoint;
			static const int	_fraction;
	public:
			Fixed();
			Fixed(const float floatValue);
			Fixed(const int intValue);
			Fixed(const Fixed& other);
			Fixed&	operator=(const Fixed& other);
			float	toFloat( void ) const;
			int		toInt( void ) const;
			~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& FixedClass);

#endif