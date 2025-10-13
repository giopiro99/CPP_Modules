/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:02:43 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/12 14:19:31 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename fn>
void	iter(T* array, unsigned int lenght, fn function)
{
	for (unsigned int i = 0; i < lenght; i++)
		function(array[i]);
}

template <typename T>
void	printing(T const& value)
{
	std::cout << value << std::endl;
}

template <typename T>
void	modifyValue(T& value)
{
	std::cout << "Value before modify " << value << std::endl;
	std::cout << "Value post modify " << value * value << std::endl;
}

#endif