/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:54:57 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/05 17:35:05 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

/*---------------------------Constructor---------------------------*/
AMateria::AMateria(std::string const & type) : type(type)
{
}

/*---------------------------Methods---------------------------*/
std::string const & AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* generic materia used on " << target.getName() << " *" << std::endl;
}

/*---------------------------Destructor---------------------------*/
AMateria::~AMateria()
{
}