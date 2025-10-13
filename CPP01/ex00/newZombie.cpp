/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:51:03 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/18 14:26:41 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::SetName(std::string name)
{
	if (!name.empty())
		this->name = name;
	else
	{
		this->name = "default";
		std::cout << "Invalid name detected" << std::endl;
	}
}

Zombie *new_zombie(std::string name)
{
	Zombie	*NewZombie;

	NewZombie = new(Zombie);
	NewZombie->SetName(name);
	return (NewZombie);
}

