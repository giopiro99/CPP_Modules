/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:16:32 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/05 17:56:33 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter
{
	protected:
		std::string	Name;
		AMateria*	mySlots[4];
		AMateria*	Inventory[20];
	public:
		Character();
		Character(std::string Name);
		Character(Character& other);
		Character& operator=(const Character& other);
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		void	cleaning();
		~Character();
};
#endif