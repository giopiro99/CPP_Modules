/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:38:34 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/24 15:34:17 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
			std::string	Name;
	public:
			DiamondTrap();
			DiamondTrap(std::string Name);
			DiamondTrap( const DiamondTrap& other);
			DiamondTrap&	operator=(const DiamondTrap& other);
			void			whoAmI();
			using			ScavTrap::attack;
			~DiamondTrap();
};
#endif