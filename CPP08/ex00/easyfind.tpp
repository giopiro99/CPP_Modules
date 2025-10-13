/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:10:21 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/05 15:39:35 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <vector>

template <typename T>
void	easyfind(T *container, int toFind)
{
	typename T::const_iterator i = std::find(container->begin(), container->end(), toFind);
	if (i != container->end())
		return ;
	else
		throw
			notFindException();
}

const char* notFindException::what() const throw()
{
	return ("Element not found in the container");
}