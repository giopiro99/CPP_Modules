/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:51:33 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/07 16:15:51 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animals.hpp"

class	Dog : public Animal
{
	public:
			Dog();
			Dog(Dog& other);
			Dog(std::string type);
			Dog&	operator=(Dog& other);
			void	makeSound() const;
			~Dog();
};

#endif