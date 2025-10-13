/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:50:11 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/09 12:51:46 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	*MyAnimals[100];

	std::cout << "------------------setting ideas-----------------------" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (i <= 50)
		{
			MyAnimals[i] = new Dog();
			Dog* thisDog = static_cast<Dog*>(MyAnimals[i]);
			if (i % 2 == 0)
				thisDog->setDogIdea("BAUUUUUU");
			else
				thisDog->setDogIdea("BONES BONES");
		}
		else
		{
			MyAnimals[i] = new Cat();
			Cat* thisCat = static_cast<Cat*>(MyAnimals[i]);
			if (i % 2 == 0)
				thisCat->setCatIdea("MIAOOOOOOOOO");
			else
				thisCat->setCatIdea("PANCAKES");
		}
	}
	std::cout << "------------------copy operator-----------------------" << std::endl;
	Dog myDog;
	myDog = *static_cast<Dog*>(MyAnimals[1]);
	myDog.getDogIdea();
	static_cast<Dog*>(MyAnimals[1])->getDogIdea();
	std::cout << "------------------getting ideas-----------------------" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (i <= 50)
		{
			Dog* thisDog = static_cast<Dog*>(MyAnimals[i]);
			thisDog->getDogIdea();
		}
		else
		{
			Cat* thisCat = static_cast<Cat*>(MyAnimals[i]);
			thisCat->getCatIdea();
		}
		delete(MyAnimals[i]);
	}
	return 0;
}