/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:54:20 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/23 16:19:06 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	GScav("Giovanni");
	ScavTrap	FScav("Francesco");
	ScavTrap	RScav("Renato");

	for (int i = 0; i < 3; i++)
	{
		GScav.attack(FScav.getName());
		FScav.takeDamage(20);
		FScav.attack(RScav.getName());
		RScav.takeDamage(20);
		RScav.attack(GScav.getName());
		GScav.takeDamage(20);
		GScav.beRepaired(10);
		FScav.beRepaired(10);
		RScav.beRepaired(10);
		GScav.guardGate();
		RScav.guardGate();
		FScav.guardGate();
	}
}