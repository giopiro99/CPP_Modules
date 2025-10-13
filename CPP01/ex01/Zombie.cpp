/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:50:54 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/18 15:03:51 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "Zombie has been created" << std::endl;
	this->name = "";
}

void	Zombie::Announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

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

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}