/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:57:52 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/05 17:53:39 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
				Cure();
				Cure(Cure& other);
				Cure&		operator=(const Cure& other);
				AMateria*	clone() const;
				void		use(ICharacter& target);
				~Cure();
};