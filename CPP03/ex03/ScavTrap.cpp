/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:48:33 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/24 14:51:04 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*---------------------------Constructors---------------------------*/
ScavTrap::ScavTrap() : ClapTrap()
{
}

ScavTrap::ScavTrap( ScavTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
	{
		this->Name = other.Name;
		this->AttackDamage = other.AttackDamage;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
	}
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "ScavTrap costructor called" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

/*---------------------------Operator---------------------------*/
ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Copy operator called" << std::endl;
	if (this != &other)
	{
		this->Name = other.Name;
		this->AttackDamage = other.AttackDamage;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
	}
	return (*this);
}

/*---------------------------Methods---------------------------*/
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target
		<< " causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
		return ;
	}
	if (HitPoints > 0)
		std::cout <<"ScavTrap " << this->Name << " says: No Energy or Hit points to attack" << std::endl;
}

/*---------------------------Destructor---------------------------*/
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}