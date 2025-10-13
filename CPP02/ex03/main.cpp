/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:18:38 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/22 15:48:46 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point a(0.0f, 0.0f);
	Point b(5.0f, 0.0f);
	Point c(0.0f, 5.0f);

	// Punto interno
	Point inside(1.0f, 1.0f);
	// Punto esterno
	Point outside(6.0f, 6.0f);
	// Punto sul bordo
	Point onEdge(2.5f, 0.0f);
	std::cout << "Punto dentro: " << bsp(a, b, c, inside) << std::endl;   // expected: 1 (true)
	std::cout << "Punto fuori: " << bsp(a, b, c, outside) << std::endl;   // expected: 0 (false)
	std::cout << "Punto su bordo: " << bsp(a, b, c, onEdge) << std::endl; // expected: 0 (false)
	return 0;
}