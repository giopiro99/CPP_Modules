/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:30:41 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/07 15:35:05 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

#include "AForm.hpp"
class	PresidentialPardonForm : virtual public AForm
{
	private:
			std::string	target;
	public:
			PresidentialPardonForm();
			PresidentialPardonForm(PresidentialPardonForm& other);
			PresidentialPardonForm(std::string& target);
			PresidentialPardonForm& operator=(PresidentialPardonForm& other);
			void	executeAction() const;
			~PresidentialPardonForm();
};

/* PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox */

#endif