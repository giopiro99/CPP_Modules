/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:02:53 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/18 16:09:49 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMALS_HPP
# define  WRONGANIMALS_HPP

#include <iostream>

class WrongAnimal
{
	protected:
				std::string	type;
	public:
				WrongAnimal();
				WrongAnimal(WrongAnimal& other);
				WrongAnimal(std::string type);
				WrongAnimal& operator=(WrongAnimal& other);
				virtual void		makeSound() const;
				std::string	getType() const;
				virtual ~WrongAnimal();
};

#endif