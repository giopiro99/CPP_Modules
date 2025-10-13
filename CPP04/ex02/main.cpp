/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:50:11 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 14:23:07 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	*MyAnimals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			MyAnimals[i] = new Dog();
			MyAnimals[i]->makeSound();
		}
		else
		{
			MyAnimals[i] = new Cat();
			MyAnimals[i]->makeSound();
		}
	}
	for (int i = 0; i < 10; i++)
			delete(MyAnimals[i]);
	return 0;
}