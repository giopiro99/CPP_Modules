/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:31:19 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/01 14:10:29 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
			Brain();
			Brain(Brain& other);
			Brain& operator=(Brain& other);
			void	setIdea(std::string idea);
			void	getIdeas();
			~Brain();
	private:
			std::string ideas[100];
		};
#endif