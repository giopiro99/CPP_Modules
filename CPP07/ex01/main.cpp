/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:11:58 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/12 14:19:22 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int	intArray[10] = {1, 2, 3, 4, 5};
	std::string stringArray[2] = {"GG", "FF"};

	iter(intArray, 10, printing<int>);
	iter(stringArray, 2, printing<std::string>);

	iter(intArray, 5, modifyValue<int>);
}