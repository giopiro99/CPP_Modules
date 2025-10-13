/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:10:46 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/23 16:58:19 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <vector>
#include <deque>
#include <iostream>

/* --------------------STATIC FUNCTIONS-------------------- */
static void	checkDoubles(long number)
{
	static std::vector<long>	inputNUmbers;

	if (std::find(inputNUmbers.begin(), inputNUmbers.end(), number) != inputNUmbers.end())
		throw std::invalid_argument("Error double number reached");
	inputNUmbers.push_back(number);
}


void	checkNumbers(int ac, char** av)
{
	for (int i = 1; i < ac; i++)
	{
		char	*endptr;
		errno = 0;
		std::string input = av[i];
		long value = std::strtol(input.c_str(), &endptr, 10);
		if (*endptr != '\0' || errno == ERANGE || value < 0 || value > std::numeric_limits<int>::max())
			throw std::invalid_argument("Error in the input numbers reached");
		checkDoubles(value);
	}
}

template <typename container>
void	fillContainer(int ac, char** av, container& c)
{
	for (int i = 1; i < ac; i++)
	{
		long value = std::strtol(av[i], NULL, 10);
		c.push_back(static_cast <int>(value));
	}
}

template <typename container>
static void	print(const container& c)
{
	for (size_t i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;
}

/* --------------------MAIN-------------------- */
int main(int ac, char** av)
{
	try
	{
		if (ac <= 2)
			throw std::invalid_argument("invalid input");

		checkNumbers(ac, av);

		PmergeMe<std::vector<int> > vector;
		PmergeMe<std::deque<int> > deque;

		fillContainer(ac, av, vector.getContainer());
		fillContainer(ac, av, deque.getContainer());

		std::cout << "Before sorting: ";
		print(vector.getContainer());

		std::cout << "Before sorting: ";
		print(deque.getContainer());

		vector.sort();
		deque.sort();

		std::cout << "Post vector sorting: ";
		print(vector.getContainer());
		std::cout << "Vector time ===> " << vector.getEndTime() << std::endl;
		vector.isSorted();

		std::cout << "Post deque sorting: ";
		print(deque.getContainer());
		std::cout << "Deque time ===> " << deque.getEndTime() << std::endl;
		deque.isSorted();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}