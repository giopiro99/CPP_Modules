/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:40:00 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/07 17:59:39 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::string	target = "Giovanni";
	AForm *FlipperForm = new PresidentialPardonForm(target);
	AForm *FrancescoForm = new RobotomyRequestForm(target);
	AForm *RenatoForm = new ShrubberyCreationForm(target);
	Bureaucrat	Peppe("Peppe", 10);
	Bureaucrat	Gigi("Gigi", 120);
	Bureaucrat	Anto("Anto", 19);	
	
	//not signed
	Peppe.executeForm(*FlipperForm);
	Gigi.executeForm(*FrancescoForm);
	Anto.executeForm(*RenatoForm);

	//signed
	std::cout << "---------------PEPPE-----------------" << std::endl;
	Peppe.signForm(*FlipperForm);
	Peppe.signForm(*FrancescoForm);
	Peppe.signForm(*RenatoForm);
	Peppe.executeForm(*FlipperForm);
	Peppe.executeForm(*FrancescoForm);
	Peppe.executeForm(*RenatoForm);
	std::cout << "---------------GIGI-----------------" << std::endl;
	Gigi.signForm(*FlipperForm);
	Gigi.signForm(*FrancescoForm);
	Gigi.signForm(*RenatoForm);
	Gigi.executeForm(*FlipperForm);
	Gigi.executeForm(*FrancescoForm);
	Gigi.executeForm(*RenatoForm);
	std::cout << "---------------ANTO-----------------" << std::endl;
	Anto.signForm(*FlipperForm);
	Anto.signForm(*FrancescoForm);
	Anto.signForm(*RenatoForm);
	Anto.executeForm(*FlipperForm);
	Anto.executeForm(*FrancescoForm);
	Anto.executeForm(*RenatoForm);
	delete(FlipperForm);
	delete(FrancescoForm);
	delete(RenatoForm);
}
//&e eccezione catturata
//try tenta di eseguire una parte di codice dove ci potrebbe essere un errore se lo trova utilizza l eccezione associata tramite il trow
/* try = provo a fare questa cosa rischiosa,
throw = se c’è un problema, lancio un’eccezione,
catch = se arriva quell’eccezione, la prendo e la gestisco. */