/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:44:12 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/20 15:59:47 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

# include <iostream>
# include "Weapon.hpp"

class HumanB
	{
		private:
			std::string	personalName;
			Weapon *personalWeapon;
		public:
			HumanB(std::string Name);
			void		attack();
			void		setWeapon(Weapon &Weapon);
			~HumanB();
	};

#endif