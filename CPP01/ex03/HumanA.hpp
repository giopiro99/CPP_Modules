/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:44:38 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/20 15:20:44 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA__HPP
# define HUMANA__HPP

#include "Weapon.hpp"

class HumanA
	{
		private:
			std::string	personalName;
			Weapon &personalWeapon;
		public:
			HumanA(std::string Name, Weapon &Weapon);
			void		attack();
			~HumanA();
	};
#endif