/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:07:02 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/12 16:22:47 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdexcept>

template<typename T>

void	easyfind(T* container, int toFind);
class notFindException : public std::exception
{
	const char*	what() const throw();
};

# include "easyfind.tpp"

#endif