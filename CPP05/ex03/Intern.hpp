/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:17:18 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/03 10:06:34 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class	Intern
{
	public:
			Intern();
			Intern(Intern& other);
			Intern&	operator=(Intern& other);
			AForm* makeForm(const std::string& formName, const std::string& target);
			~Intern();
			class	ExeptionFormName : public std::exception
			{
				public:
						virtual const char*	what() const throw();
			};
};

#endif