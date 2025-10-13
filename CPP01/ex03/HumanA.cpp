/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:45:38 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/20 15:58:17 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &Weapon) : personalName(Name), personalWeapon(Weapon)
{

}

void	HumanA::attack()
{
	std::cout << this->personalName << " Attack with " << this->personalWeapon.getType() <<std::endl;
}

HumanA::~HumanA()
{

}