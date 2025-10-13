/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:03:49 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 13:26:45 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define  WRONGCAT_HPP

# include "WrongAnimals.hpp"

class WrongCat : public WrongAnimal
{
	public:
			WrongCat();
			WrongCat(WrongCat& other);
			WrongCat(std::string type);
			WrongCat	operator=(WrongCat& other);
			void		makeSound() const;
			~WrongCat();
};

#endif