/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:54:20 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/24 11:12:52 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap	GFrag("Giovanni");
	ScavTrap	Flipper("Flipper");

	for (int i = 0; i < 3; i++)
	{
		Flipper.attack(GFrag.getName());
		GFrag.takeDamage(20);
		GFrag.attack(Flipper.getName());
		Flipper.takeDamage(5);
		Flipper.guardGate();
		GFrag.highFivesGuys();
	}
}