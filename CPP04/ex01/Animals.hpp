/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:51:07 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 13:56:28 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP

# include <iostream>

class	Animal
{
	protected:
				std::string	type;
	public:
				Animal();
				Animal(Animal& other);
				Animal(std::string type);
				Animal&			operator=(Animal& other);
				std::string		getType() const;
				virtual void	makeSound() const;
				virtual ~Animal();
};

#endif