/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:25:02 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/12 14:20:39 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
template <typename T> class Array
{
	private:
			T*	data;
			unsigned int length;
	public:
			Array();
			Array(unsigned int n);
			Array(const Array& other);
			Array&		operator=(const Array& other);
			T&			operator[](unsigned int index);
			const T&	operator[](unsigned int index) const;
			unsigned int	size() const;
			~Array();
			class OutOfBoundExeption : public std::exception
			{
				public:
						virtual const char* what() const throw();
			};
};

# include "Array.tpp"

#endif