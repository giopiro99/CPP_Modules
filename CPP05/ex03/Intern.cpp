/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:22:36 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/03 10:12:21 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*---------------------------Constructor---------------------------*/
Intern::Intern() {}

Intern::Intern(Intern& other)
{
	(void)other;
}

/*---------------------------Operator---------------------------*/
Intern&	Intern::operator=(Intern& other)
{
	(void)other;
	return (*this);
}

/*---------------------------Methods---------------------------*/
static int	getFormName(std::string formName)
{
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (size_t i = 0; i < formName.length(); i++)
		formName[i] = std::tolower(formName[i]);

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
			return (i);
	}
	throw
		Intern::ExeptionFormName();
}

AForm*	Intern::makeForm(const std::string& formName, const std::string& target)
{
	try
	{
		int	formIndex = getFormName(formName);
		AForm *Form;
		switch (formIndex)
		{
			case 0:
				Form = new PresidentialPardonForm(target);
				return (Form);
			case 1:
				Form = new RobotomyRequestForm(target);
				return (Form);
			case 2:
				Form = new ShrubberyCreationForm(target);
				return (Form);
			default:
				break;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	throw
		Intern::ExeptionFormName();
}

const char*	Intern::ExeptionFormName::what() const throw()
{
	return ("Error, this form name dosn't exist");
}
/*---------------------------Destructor---------------------------*/
Intern::~Intern() {}