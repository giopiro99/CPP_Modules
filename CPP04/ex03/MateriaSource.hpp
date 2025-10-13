/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:41:46 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/05 17:53:55 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
			AMateria*		learnedMaterias[10];
	public:
			MateriaSource();
			MateriaSource(MateriaSource& other);
			MateriaSource&	operator=(const MateriaSource& other);
			void			learnMateria(AMateria* m);
			AMateria*		createMateria(std::string const & type);
			~MateriaSource();
};
#endif