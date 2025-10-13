/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:51:06 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/18 15:18:59 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*NewHorde;
	int		N;

	N = 0;
	NewHorde = zombieHorde(N, "Giovanni");
	for (int i = 0; i < N; i++)
			NewHorde[i].Announce();
	delete[] (NewHorde);
	return (0);
}