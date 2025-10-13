/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:28:31 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/24 14:49:53 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*---------------------------Constructor---------------------------*/
ClapTrap::ClapTrap() : Name(""), HitPoints(0), EnergyPoints(0), AttackDamage(0)
{
}

ClapTrap::ClapTrap( ClapTrap& other)
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

ClapTrap::ClapTrap(std::string Name) : Name(Name), HitPoints(10), EnergyPoints(10), AttackDamage(5)
{
	std::cout << "costructor called" << std::endl;
}

/*---------------------------Operator---------------------------*/
ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
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
void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target
		<< " causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
		return ;
	}
	if (HitPoints > 0)
		std::cout <<"Claptrap " << this->Name << " says: No Energy or Hit points to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints == 0 || amount >= this->HitPoints)
	{
		this->HitPoints = 0;
		std::cout << "Claptrap " << this->Name << " is dead" << std::endl;
		return ;
	}
	this->HitPoints -= amount;
	std::cout <<"Claptrap " << this->Name << " says: Ouch you hit me, and now i have " << this->HitPoints << " hit points" <<  std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints > 0 && this->EnergyPoints > 0)
	{
		std::cout <<"Claptrap " << this->Name << "says: I m reparing my HitPoints!" << std::endl;
		this->HitPoints += amount;
		this->EnergyPoints--;
		return ;
	}
	if (HitPoints > 0)
		std::cout <<"Claptrap " << this->Name << "says: I can t repair, i m out of EnergyPoints!" << std::endl;
	return ;
}

std::string	ClapTrap::getName( void ) const
{
	return (this->Name);
}

/*---------------------------Destructor---------------------------*/
ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

