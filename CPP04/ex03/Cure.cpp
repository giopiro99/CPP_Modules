/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:57:49 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/05 17:10:24 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

/*---------------------------Constructor---------------------------*/
Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure& other): AMateria(other.getType())
{
}

/*---------------------------Operator---------------------------*/
Cure&	Cure::operator=(const Cure& other)
{
	if (this != &other)
		this->type = other.getType();
	return (*this);
}

/*---------------------------Methods---------------------------*/
AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

/*---------------------------Destructor---------------------------*/
Cure::~Cure()
{
}