/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:52:17 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/24 15:19:07 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap( ScavTrap& other);
			ScavTrap(std::string Name);
			ScavTrap&	operator=(const ScavTrap& other);
			void	attack(const std::string& target);
			void	guardGate();
			~ScavTrap();
};

#endif