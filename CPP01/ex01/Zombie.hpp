/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:50:58 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/18 15:04:35 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>


class Zombie
{
	private:
	std::string	name;
	public:
			Zombie();
			void	SetName( std::string name );
			void	Announce( void );
			~Zombie();
};

Zombie *new_zombie(std::string name);
void	randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );
#endif