/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:40:08 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/07 17:48:42 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

/*---------------------------Constructor---------------------------*/
Bureaucrat::Bureaucrat() : Name(""), Grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : Name(other.getName()), Grade(other.getGrade())
{
}

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : Name(Name)
{
	this->Grade = Grade;
	if (this->Grade < 1)
		throw
			Bureaucrat::GradeTooHighException();
	else if (this->Grade > 150)
		throw
			Bureaucrat::GradeTooLowException();
}

/*---------------------------Operator---------------------------*/
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		std::cout << "Name not copyable" << std::endl;
		this->Grade = other.getGrade();
		if (this->Grade < 1)
			throw
				Bureaucrat::GradeTooHighException();
		else if (this->Grade > 150)
			throw
				Bureaucrat::GradeTooLowException();
	}
	return (*this);
}

/*---------------------------Methods---------------------------*/
const std::string	Bureaucrat::getName() const
{
	return (this->Name);
}

void	Bureaucrat::incrementGrade()
{
	this->Grade += 1;
	if (Grade > 150)
		throw
			Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrementGrade()
{
	this->Grade -= 1;
	if (this->Grade < 1)
		throw
			Bureaucrat::GradeTooHighException();
}

int	Bureaucrat::getGrade() const
{
	return (this->Grade);
}

void	Bureaucrat::signForm(AForm& AForm)
{
	try
	{
		if (AForm.getIsSigned() == true)
		{
			std::cout << "The Aform "<< AForm.getName() << " is alredy signed" << std::endl;
			return ;
		}
		AForm.beSigned(*this);
		std::cout << this->getName() << " signed " << AForm.getName() << std::endl;
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cout << this->getName() << " couldn’t sign " << AForm.getName() << " because " << e.what() << std::endl;
	}
	catch(AForm::GradeTooHighException &e)
	{
		std::cout << this->getName() << " couldn’t sign " << AForm.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const AForm& Form) const
{
	try
	{
		Form.execute(*this);
		std::cout << this->getName() << " executed " << Form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
/*---------------------------Exception---------------------------*/
const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too high Grade");
}


const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too low Grade");
}

/*---------------------------Destructor---------------------------*/
Bureaucrat::~Bureaucrat() {}

/*---------------------------print overload---------------------------*/
std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat)
{
	os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
	return (os);
}

