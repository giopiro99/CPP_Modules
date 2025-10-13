/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:18:52 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/06 17:04:14 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
				std::string	type;
	public:
				AMateria(std::string const & type);
				std::string const & getType() const; //Returns the materia type
				virtual AMateria* clone() const = 0;
				virtual void use(ICharacter& target);
				virtual ~AMateria();
};
#endif