/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:54:20 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/08 11:14:30 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	FragTrap	GFrag("Giovanni");
	ScavTrap	Flipper("Flipper");
	DiamondTrap	GG("GG");

	GG.attack("FFF");
	for (int i = 0; i < 3; i++)
	{
		Flipper.attack(GFrag.getName());
		GFrag.takeDamage(20);
		GFrag.attack(Flipper.getName());
		Flipper.takeDamage(5);
		Flipper.guardGate();
		GFrag.highFivesGuys();
		GG.whoAmI();
	}
}
/*       ClapTrap
        /      \
   ScavTrap   FragTrap
        \      /
       DiamondTrap
Si usa virtual in ScavTrap e FragTrap per fare in modo che diamondTrap riceva una sola "copia" di ClapTrap*/