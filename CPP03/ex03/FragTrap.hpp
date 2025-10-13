/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:22:48 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/07 14:20:33 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
			FragTrap();
			FragTrap( FragTrap& other);
			FragTrap(std::string Name);
			FragTrap&	operator=(const FragTrap& other);
			void		attack(const std::string& target);
			void		highFivesGuys(void);
			~FragTrap();
};

#endif