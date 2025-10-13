/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:43:13 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/20 15:23:14 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WAEPON_HPP
# define WAEPON_HPP

# include <iostream>

class Weapon
	{
		private:
				std::string	type;
		public:
			Weapon(std::string WeaponType);
			std::string	getType();
			void		setType(std::string type);
			~Weapon();
	};

#endif