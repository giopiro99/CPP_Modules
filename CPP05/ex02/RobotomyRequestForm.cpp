/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:59:02 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/07 17:36:46 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*---------------------------Constructor---------------------------*/
RobotomyRequestForm::RobotomyRequestForm() :
			AForm("RobotomyRequestForm", 72, 45), target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string& target) :
			AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other) :
			AForm(other.getName(), other.getGradeToSign(), other.getGradeToExe()), target(other.target)
{
}

/*---------------------------Operator---------------------------*/
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other)
{
	if (this != &other)
		this->target = other.target;
	return (*this);
}
/*---------------------------Methods---------------------------*/
void	RobotomyRequestForm::executeAction() const
{
	static int	randomOutPut = 0;
	if (randomOutPut % 2 == 0)
		std::cout << target << " has been robotomized" << std::endl;
	else
		std::cout << target << " robotomY failed" << std::endl;
	randomOutPut++;
}
/* <target> has been robotomized
successfully 50% of the time. Otherwise, it informs that the robotomy failed. */
/*---------------------------Destructor---------------------------*/
RobotomyRequestForm::~RobotomyRequestForm()
{
}
/* RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises, then informs that <target> has been robotomized
successfully 50% of the time. Otherwise, it informs that the robotomy failed */