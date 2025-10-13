/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:06:52 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/23 12:29:25 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap G("Giovanni");
	ClapTrap F("Francesco");
	ClapTrap R("Renato");

	for (int i = 0; i <= 5; i++)
	{
		G.attack(F.getName());
		F.takeDamage(5);
		F.attack(R.getName());
		R.takeDamage(5);
		R.attack(G.getName());
		G.takeDamage(5);
	}
}