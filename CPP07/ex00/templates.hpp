/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:39:38 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/12 14:15:53 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP



template<typename type>
type	min(type value1, type value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}
template<typename type>
void	swap(type &value1, type &value2)
{
	type	tmp;
	
	tmp = value1;

	value1 = value2;
	value2 = tmp;
}

template<typename type>
type	max(type value1, type value2)
{
	if (value1 > value2)
		return (value1);
	return (value2);
}

#endif