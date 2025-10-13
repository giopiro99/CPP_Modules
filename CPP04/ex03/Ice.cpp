/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:57:54 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/05 17:40:37 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

/*---------------------------Constructor---------------------------*/
Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice& other) : AMateria(other.getType())
{
}

/*---------------------------Operator---------------------------*/
Ice&	Ice::operator=(const Ice& other)
{
	if (this != &other)
		this->type = other.getType();
	return (*this);
}

/*---------------------------Methods---------------------------*/
AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/*---------------------------Destructor---------------------------*/
Ice::~Ice()
{
}