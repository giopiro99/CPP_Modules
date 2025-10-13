/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:11:52 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/21 11:01:36 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
			void		debug( void );
			void		info( void );
			void		warning( void );
			void		error( void );
			void		(Harl::*functions[4])();
	public:
			Harl();
			void complain( std::string level );
			~Harl();
};
#endif