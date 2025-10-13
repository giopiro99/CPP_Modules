/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:58:00 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/11 10:45:25 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data	structure;
	Data*	newData = &structure;
 
	std::cout << "Before deserialize " << newData << std::endl;
	uintptr_t	indexNewData = Serializer::serialize(newData);
	std::cout << "Numeric value " << indexNewData << std::endl;
	std::cout << "Post deserialize " <<Serializer::deserialize(indexNewData) << std::endl;
 
	(void)newData;
	return (0);
}