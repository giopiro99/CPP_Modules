/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:33:33 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/03 10:07:35 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm :  virtual public AForm
{
	private:
			std::string	target;
	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(const std::string& target);
			ShrubberyCreationForm(ShrubberyCreationForm& other);
			ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
			void	executeAction() const;
			~ShrubberyCreationForm();
};

/* ShrubberyCreationForm: Required grades: sign 145, exec 137
Creates a file <target>_shrubbery in the working directory and writes ASCII trees
inside it. */
#endif