/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:45:10 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/18 16:13:22 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

/*---------------------------Constructors---------------------------*/
DiamondTrap::DiamondTrap() : ClapTrap()
{
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), FragTrap(), ScavTrap()
{
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
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

/*---------------------------Operator---------------------------*/
DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
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
void	DiamondTrap::whoAmI()
{
	std::cout << this->Name << std::endl;
	std::cout << ClapTrap::Name << std::endl;
}

/*---------------------------Destructor---------------------------*/
DiamondTrap::~DiamondTrap()
{
}