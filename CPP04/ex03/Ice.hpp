/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:57:57 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/06 17:04:32 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"


class	Ice :public AMateria
{
	public:
			Ice();
			Ice(Ice& other);
			Ice&		operator=(const Ice& other);
			AMateria*	clone() const;
			void		use(ICharacter& target);
			~Ice();
};

#endif
