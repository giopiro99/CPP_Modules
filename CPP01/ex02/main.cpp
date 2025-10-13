/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:23:15 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/21 17:27:39 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	&stringREF = str;
	std::string	*stringPTR = &str;

	std::cout << "this is reference of the string " << &str << std::endl;
	std::cout << "this is the reference " << &stringREF << std::endl;
	std::cout << "this is the ptr " << stringPTR << std::endl;

	std::cout << "this is the string " << str << std::endl;
	std::cout << "this is the value of the reference " << stringREF << std::endl;
	std::cout << "this is the value pointed by ptr " << *stringPTR << std::endl;
}