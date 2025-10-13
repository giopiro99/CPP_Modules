/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:19:56 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/10/09 18:03:10 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <stdexcept>
#include <climits>

Span::Span() : size(0)
{
}

Span::Span(unsigned int size) : size(size)
{
	vector.reserve(size);
}
Span::Span(const Span& other)
{
	for (size_t i = 0; i < vector.size(); i++)
		vector[i] = other.vector[i];
	size = other.size;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < vector.size(); i++)
			vector[i] = other.vector[i];
		size = other.size;
	}
	return (*this);
}

void	Span::addNumber(int number)
{
	if (vector.size() == size)
		std::length_error("Max size");
	vector.push_back(number);
}

unsigned int	Span::shortestSpan()
{
	if (size < 2)
		std::runtime_error("Too few argument");
	int	range = INT_MAX;
	std::vector<int>	sorted(vector);
	std::sort(sorted.begin(), sorted.end());
	for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		if (sorted[i + 1] - sorted[i] < range)
			range = sorted[i + 1] - sorted[i];
	}
	return (range);
}

unsigned int	Span::longestSpan()
{
	if (size < 2)
		std::runtime_error("Too few argument");

	int max = *std::max_element(vector.begin(), vector.end());
	int min = *std::min_element(vector.begin(), vector.end());
	return (max - min);
}

