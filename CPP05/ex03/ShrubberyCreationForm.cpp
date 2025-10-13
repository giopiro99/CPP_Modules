/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:33:30 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/03 10:07:39 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>


/*---------------------------Constructor---------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm() :
			AForm("ShrubberyCreationForm", 145, 137), target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
			AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other) :
			AForm(other.getName(), other.getGradeToSign(), other.getGradeToExe()), target(other.target)
{
}

/*---------------------------Operator---------------------------*/
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other)
{
	if (this != &other)
		this->target = other.target;
	return (*this);
}

/*---------------------------Methods---------------------------*/
void ShrubberyCreationForm::executeAction() const
{
	std::string filename = this->target + "_shrubbery";
	std::ofstream	file(filename.c_str());
	if (!file)
	{
		std::cout << "Error: cannot open the file" << std::endl;
		return ;
	}
		file  << "       _-_ " << "\n"
			  << "    /~~   ~~\""  << "\n"
			  << " /~~         ~~'\' " << "\n"
			  << "{               } " << "\n"
			  << " '\'  _-     -_  / " << "\n"
			  << "   ~  \\ //  ~ " << "\n"
			  << "_- -   | | _- _ " << "\n"
			  << "  _ -  | |   -_ " << "\n"
			  << "      // \\ */ " << "\n" << std::endl;
	file.close();
}

/*---------------------------Destructor---------------------------*/
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}