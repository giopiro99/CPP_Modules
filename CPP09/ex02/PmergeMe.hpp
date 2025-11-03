/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:03:08 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/10/01 11:38:14 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
template <typename container> class PmergeMe
{
	public:
			typedef typename container::iterator	iterator;
	private:
			container	c;
			long		startTime;
			long		endTime;
			static const unsigned int jacob[];
	public:
			PmergeMe();
			PmergeMe(const PmergeMe& other);
			PmergeMe&	operator=(const PmergeMe& other);
			void		sort();
			void		isSorted();
			container&	getContainer();
			iterator	binarySearch(iterator begin, iterator end, int value);
			void		binaryInsert(container pendant, std::vector< std::pair<int, int> > pairs,int i, int forEverAlone);
			long		getEndTime();
			~PmergeMe() {};
};

#include "PmergeMe.tpp"

#endif
