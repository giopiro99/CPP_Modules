/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:19:35 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/03 09:43:39 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*---------------------------Constructor---------------------------*/
Form::Form() : Name(""), isSigned(false), GradeRequiredToSign(1), GradeRequiredToExe(1)
{
}

Form::Form(Form& other) : Name(other.getName()),  isSigned(other.getIsSigned()), GradeRequiredToSign(other.getGradeToSign()),
							GradeRequiredToExe(other.getGradeToExe())
{
}

Form::Form(const std::string Name, const int GradeRequiredToSign, const int GradeRequiredToExe)
			: Name(Name), isSigned(false), GradeRequiredToSign(GradeRequiredToSign), GradeRequiredToExe(GradeRequiredToExe)
{
	if (this->GradeRequiredToExe < 1 || this->GradeRequiredToSign < 1)
		throw
			Form::GradeTooHighException();
	else if (this->GradeRequiredToExe > 150  || this->GradeRequiredToSign > 150)
		throw
			Form::GradeTooLowException();
}

/*---------------------------Operator---------------------------*/
Form&	Form::operator=(Form& other)
{
	std::cout << "uneble to copy all attributes some are costant" << std::endl;
	this->isSigned = other.getIsSigned();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Form& Form)
{
	os << "Form name: " << Form.getName() << std::endl;
	os << "Grade required to sign: " << Form.getGradeToSign() << std::endl;
	os << "Grade required to exe: " << Form.getGradeToExe() << std::endl;
	os << "Form is signed? => ";
	if (Form.getIsSigned() == true ? std::cout << "True" : std::cout << "False")
		;
	return (os);
}

/*---------------------------Methods---------------------------*/
std::string	Form::getName() const
{
	return (this->Name);
}

int	Form::getGradeToSign() const
{
	return (this->GradeRequiredToSign);
}

int	Form::getGradeToExe() const
{
	return (this->GradeRequiredToExe);
}

bool	Form::getIsSigned() const
{
	return (this->isSigned);
}

void	Form::beSigned(const Bureaucrat& Bureaucrat)
{
	if (Bureaucrat.getGrade() < 1)
		throw
			Form::GradeTooHighException();
	else if (Bureaucrat.getGrade() <= this->GradeRequiredToSign)
		this->isSigned = true;
	else
		throw
			Form::GradeTooLowException();
}

/*---------------------------Execption---------------------------*/
const char*	Form::GradeTooHighException::what() const throw()
{
	return ("grade to high");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("grade to low");
}

/*---------------------------Destructor---------------------------*/
Form::~Form(){}