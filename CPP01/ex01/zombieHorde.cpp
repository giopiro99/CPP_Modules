/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:58:46 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/18 15:15:34 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <limits.h>

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0 || N > INT_MAX)
	{
		std::cout << "Invalid number of zombies" << std::endl;
		exit (0);
	}
	Zombie	*Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		if (!name.empty())
			Horde[i].SetName(name);
		else
			Horde[i].SetName("Default");
	}
	return (Horde);
}