/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:19:35 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/07 17:52:02 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*---------------------------Constructor---------------------------*/
AForm::AForm() : Name(""), isSigned(false), GradeRequiredToSign(1), GradeRequiredToExe(1)
{
}

AForm::AForm(AForm& other) : Name(other.getName()),  isSigned(other.getIsSigned()), GradeRequiredToSign(other.getGradeToSign()),
							GradeRequiredToExe(other.getGradeToExe())
{
}

AForm::AForm(const std::string Name, const int GradeRequiredToSign, const int GradeRequiredToExe)
			: Name(Name), isSigned(false), GradeRequiredToSign(GradeRequiredToSign), GradeRequiredToExe(GradeRequiredToExe)
{
	if (this->GradeRequiredToExe < 1 || this->GradeRequiredToSign < 1)
		throw
			AForm::GradeTooHighException();
	else if (this->GradeRequiredToExe > 150  || this->GradeRequiredToSign > 150)
		throw
			AForm::GradeTooLowException();
}

/*---------------------------Operator---------------------------*/
AForm&	AForm::operator=(AForm& other)
{
	std::cout << "uneble to copy all attributes some are costant" << std::endl;
	this->isSigned = other.getIsSigned();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const AForm& AForm)
{
	os << "Form name: " << AForm.getName() << std::endl;
	os << "Grade required to sign: " << AForm.getGradeToSign() << std::endl;
	os << "Grade required to exe: " << AForm.getGradeToExe() << std::endl;
	os << "Form is signed? => ";
	if (AForm.getIsSigned() == true ? std::cout << "True" : std::cout << "False")
		;
	return (os);
}

/*---------------------------Methods---------------------------*/
std::string	AForm::getName() const
{
	return (this->Name);
}

int	AForm::getGradeToSign() const
{
	return (this->GradeRequiredToSign);
}

int	AForm::getGradeToExe() const
{
	return (this->GradeRequiredToExe);
}

bool	AForm::getIsSigned() const
{
	return (this->isSigned);
}

void	AForm::beSigned(const Bureaucrat& Bureaucrat)
{
	if (Bureaucrat.getGrade() < 1)
		throw
			AForm::GradeTooHighException();
	else if (Bureaucrat.getGrade() <= this->GradeRequiredToSign)
		this->isSigned = true;
	else
		throw
			AForm::GradeTooLowException();
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw
			AForm::FormNotSigned();
	else if (executor.getGrade() > this->GradeRequiredToExe)
		throw
			AForm::GradeTooLowExecutionException();
	else
		this->executeAction();
}

/*---------------------------Execption---------------------------*/
const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Unable to sign the form: grade to high");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Unable to sign the form: grade to low");
}

const char*	AForm::GradeTooLowExecutionException::what() const throw()
{
	return ("Unable to exe the form: grade to low");
}

const char*	AForm::FormNotSigned::what() const throw()
{
	return ("Unable to exe the form: Form not signed, retry");
}
/*---------------------------Destructor---------------------------*/
AForm::~AForm(){}