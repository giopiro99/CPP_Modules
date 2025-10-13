/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:18:49 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/15 15:08:38 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

/*---------------------------Constructor---------------------------*/
Character::Character() : Name("")
{
	for (int i = 0; i < 20; i++)
		this->Inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->mySlots[i] = NULL;
}

Character::Character(std::string Name) : Name(Name)
{
	for (int i = 0; i < 20; i++)
		this->Inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->mySlots[i] = NULL;
}

Character::Character(Character& other) : Name(other.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (other.mySlots[i] != NULL)
			this->mySlots[i] = other.mySlots[i]->clone();
		else
			this->mySlots[i] = NULL;
	}
	for (int i = 0; i < 20; i++)
	{
		if (other.Inventory[i] != NULL)
			this->Inventory[i] = other.Inventory[i]->clone();
		else
			this->Inventory[i] = NULL;
	}
}
/*---------------------------Operator---------------------------*/
Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->Name = other.getName();
		this->cleaning();
		for (int i = 0; i < 4; i++)
		{
			if (other.mySlots[i] != NULL)
				this->mySlots[i] = other.mySlots[i]->clone();
			else
				this->mySlots[i] = NULL;
		}
		for (int i = 0; i < 20; i++)
		{
			if (other.Inventory[i] != NULL)
				this->Inventory[i] = other.Inventory[i]->clone();
			else
				this->Inventory[i] = NULL;
		}
	}
	return (*this);
}

/*---------------------------Methods---------------------------*/
std::string const & Character::getName() const
{
	return (this->Name);
}


void	Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->mySlots[i] == NULL)
		{
			this->mySlots[i] = m;
			return ;
		}
	}
	std::cout << "All slots are full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	if (this->mySlots[idx] != NULL)
	{
		for (int i = 0; i < 20; i++)
		{
			if (this->Inventory[i] == NULL)
			{
				this->Inventory[i] = this->mySlots[idx];
				this->mySlots[idx] = NULL;
				
				return ;
			}
		}
		std::cout << "Uneble to save the Materia, memory leak occurred" << std::endl;
	}
	else
	std::cout << "The slot is alredy empty" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	if (this->mySlots[idx] != NULL)
	this->mySlots[idx]->use(target);
}

void	Character::cleaning()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->mySlots[i])
		{
			delete(this->mySlots[i]);
			this->mySlots[i] = NULL;
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if (this->Inventory[i])
		{
			delete(this->Inventory[i]);
			this->Inventory[i] = NULL;
		}
	}
}

/*---------------------------Destructor---------------------------*/
Character::~Character()
{
	this->cleaning();
}