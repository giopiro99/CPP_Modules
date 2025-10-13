/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:28:36 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/24 12:09:23 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
			std::string	Name;
			unsigned int		HitPoints;
			unsigned int		EnergyPoints;
			unsigned int		AttackDamage;
	public:
			ClapTrap();
			ClapTrap( ClapTrap& other);
			ClapTrap(std::string Name);
			ClapTrap&	operator=(const ClapTrap& other);
			void		attack(const std::string& target);
			void		takeDamage(unsigned int amount);
			void		beRepaired(unsigned int amount);
			std::string	getName( void ) const;
			~ClapTrap();
};
#endif