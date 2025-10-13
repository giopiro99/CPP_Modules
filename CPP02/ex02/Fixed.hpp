/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:28:34 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/06 10:48:52 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define  FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int		fixedPoint;
			static	const int _fraction;
	public:
			Fixed();
			Fixed(const Fixed& other);
			Fixed(const float floatValue);
			Fixed(const int intValue);
			int				getRawBits( void ) const;
			void			setRawBits( int const raw );
			bool			operator>(const Fixed& other) const;
			bool			operator<(const Fixed& other) const;
			bool			operator>=(const Fixed& other) const;
			bool			operator<=(const Fixed& other) const;
			bool			operator==(const Fixed& other) const;
			bool			operator!=(const Fixed& other) const;
			Fixed&			operator=(const Fixed& other);
			Fixed			operator+(const Fixed& other) const;
			Fixed			operator++( void );
			Fixed			operator++( int );
			Fixed			operator-(const Fixed& other) const;
			Fixed			operator--( void );
			Fixed			operator--( int );
			Fixed			operator*(const Fixed& other) const;
			Fixed			operator/(const Fixed& other) const;
			static Fixed&	min(Fixed& a, Fixed& b);
			static const	Fixed&	min(const Fixed& a, const Fixed& b);
			static Fixed&	max(Fixed& a, Fixed& b);
			static const	Fixed&	max(const Fixed& a, const Fixed& b);
			float			toFloat( void ) const;
			int				toInt( void ) const;
			~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& FixedClass);
#endif