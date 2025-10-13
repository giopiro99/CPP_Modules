/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:22:31 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/24 14:48:29 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*---------------------------Constructors---------------------------*/
FragTrap::FragTrap() : ClapTrap()
{
}

FragTrap::FragTrap( FragTrap& other)
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

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "FragTrap costructor called" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

/*---------------------------Operators---------------------------*/
FragTrap&	FragTrap::operator=(const FragTrap& other)
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
void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->Name << " Hight five guys!!!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "FragTrap " << this->Name << " attacks " << target
		<< " causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
		return ;
	}
	if (HitPoints > 0)
		std::cout << "FragTrap " << this->Name << " says: No Energy or Hit points to attack" << std::endl;
}

/*---------------------------Destructor---------------------------*/
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}