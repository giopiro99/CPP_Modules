/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:50:11 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 13:28:56 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimals.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();  //will output the dog sound!
	meta->makeSound();  //will output no sound!
	delete(meta);
	delete(i);
	delete(j);

	/* Senza virtual il compilatore usa i metodi del puntatore base e non dell oggetto specifico */
	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongAnimal *wrongcat = new WrongCat();
	wronganimal->makeSound();
	wrongcat->makeSound();
	delete(wronganimal);
	delete(wrongcat);
	return 0;
}