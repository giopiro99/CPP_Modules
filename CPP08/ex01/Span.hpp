/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:26:28 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/29 10:34:58 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <stdexcept>
# include <vector>

class Span
{
	private:
			std::vector<int>	vector;
			unsigned int		size;
	public:
			Span();
			Span(unsigned int size);
			Span(const Span& other);
			Span&			operator=(const Span& other);
			void			addNumber(int number);
			unsigned int	shortestSpan();
			unsigned int	longestSpan();
			template <typename it>
			void	addRange(const it begin, const it end)
			{
				if (vector.size() + std::distance(begin, end) > size)
					throw
						std::runtime_error("max size overflow");
				vector.insert(vector.end(), begin, end);
			}
			~Span() {};

};
#endif