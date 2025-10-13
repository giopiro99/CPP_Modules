/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:48:26 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/16 14:26:33 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; av[i];i++)
		{
			std::string str = av[i];
			for (unsigned int j = 0; j < str.length();j++)
			{
				char c = std::toupper(str[j]);
				std::cout << c;
			}
			std::cout << std::endl;
		}
	}
}
