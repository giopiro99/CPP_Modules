/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:51:28 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/04 13:48:27 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animals.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
			Cat();
			Cat(Cat& other);
			Cat(std::string type);
			Cat&	operator=(Cat& other);
			void	makeSound() const;
			~Cat();
	private:
			Brain* CatBrain;
};
#endif