/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:51:06 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/18 14:26:23 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*NewZombie;
	randomChump("Francesco");

	NewZombie = new_zombie("Giovanni");
	NewZombie->Announce();
	delete(NewZombie);
	return (0);
}