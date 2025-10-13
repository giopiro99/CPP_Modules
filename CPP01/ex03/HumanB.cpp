/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:45:42 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/21 16:24:11 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string Name) : personalName(Name), personalWeapon(NULL)
{

}

void	HumanB::attack()
{
	if (!this->personalWeapon->getType().empty())
		std::cout << this->personalName << " Attack with " << this->personalWeapon->getType() <<std::endl;
}

void	HumanB::setWeapon(Weapon& Weapon)
{
	this->personalWeapon = &Weapon;
}

HumanB::~HumanB()
{
	
}