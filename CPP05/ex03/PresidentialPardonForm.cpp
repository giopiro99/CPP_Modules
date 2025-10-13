/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:30:30 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/03 10:07:14 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

/*---------------------------Constructor---------------------------*/
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
				AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other) :
				AForm(other.getName(), other.getGradeToSign(), other.getGradeToExe()), target(other.target)
{
}

/*---------------------------Operator---------------------------*/
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
{
	if (this != &other)
		this->target = other.target;
	return (*this);
}

/*---------------------------Methods---------------------------*/
void	PresidentialPardonForm::executeAction() const
{
	std::cout << target <<" has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/*---------------------------Destructor---------------------------*/
PresidentialPardonForm::~PresidentialPardonForm()
{
}


