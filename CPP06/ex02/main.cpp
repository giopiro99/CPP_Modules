/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 17:05:46 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/10 16:51:54 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"
#include <iostream>
#include <cstdlib>
int main()
{
	Base* ptr;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		ptr = generate();
		identify(ptr);
		identify(*ptr);
		delete (ptr);
		std::cout << "-------------------Test finish-------------------" << std::endl;
	}
}