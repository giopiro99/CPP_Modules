/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:41:35 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/05 17:45:15 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

/*---------------------------Constructor---------------------------*/
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 10; i++)
		this->learnedMaterias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& other)
{
	for (int i = 0; i < 10; i++)
	{
		if (other.learnedMaterias[i])
			this->learnedMaterias[i] = other.learnedMaterias[i]->clone();
		else
			this->learnedMaterias[i] = NULL;
	}
}

/*---------------------------Operators---------------------------*/
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 10; i++)
		{
			if (other.learnedMaterias[i])
				this->learnedMaterias[i] = other.learnedMaterias[i]->clone();
			else
				this->learnedMaterias[i] = NULL;
		}
	}
	return (*this);
}

/*---------------------------Methods---------------------------*/
void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 10; i++)
	{
		if (this->learnedMaterias[i] == NULL)
		{
			this->learnedMaterias[i] = m;
			return ;
		}
	}
	std::cout << "Unable to learn a new materia" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 10; i++)
	{
		if (this->learnedMaterias[i])
		{
			if (this->learnedMaterias[i]->getType() == type)
				return (this->learnedMaterias[i]->clone());
		}
	}
	return (NULL);
}

/*---------------------------Destructor---------------------------*/
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 10; i++)
	{
		if (this->learnedMaterias[i])
		{
			delete(this->learnedMaterias[i]);
			this->learnedMaterias[i] = NULL;
		}
	}
}