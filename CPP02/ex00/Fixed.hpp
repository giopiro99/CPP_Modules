/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:49:39 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/22 15:52:40 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
			int					fixedPoint;
			static const int	_fraction;
	public:
			Fixed();
			Fixed(const Fixed& other);
			Fixed&	operator=(const Fixed& other);
			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
			~Fixed();
};
#endif