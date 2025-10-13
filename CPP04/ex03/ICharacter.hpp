/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:19:11 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/06 17:09:45 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class AMateria;

class ICharacter
{
	public:
			virtual	std::string const & getName() const = 0;
			virtual	void equip(AMateria* m) = 0;
			virtual	void unequip(int idx) = 0;
			virtual	void use(int idx, ICharacter& target) = 0;
			virtual	~ICharacter() {};
};
#endif