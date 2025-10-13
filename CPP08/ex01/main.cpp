/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:43:57 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/05 15:22:10 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
int main()
{
	std::cout << std::string(20, '=') << "GOOD TEST" << std::string(20, '=') << std::endl;
	try
	{
		Span sp = Span(2000);
		sp.addNumber(-6);
		sp.addNumber(-3);
		sp.addNumber(17);
		sp.addNumber(9);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		int	arr[9] = {109, 200, -31, -32, 5, 63, 70, 80, 32};
		sp.addRange(arr, arr + 9);
		std::cout << std::string(20, '=') << "SPAN AFTER ADD RANGE" << std::string(20, '=') << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::string(20, '=') << "OVERFLOW" << std::string(20, '=') << std::endl;
	try
	{
		Span sp = Span(10);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	
	
		int	arr[9] = {109, 200, 31, 42, 5, 633, 70, 800, 900};
		sp.addRange(arr, arr + 9);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}