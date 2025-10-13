/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:40:00 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/06 16:05:29 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <ostream>

int main()
{
	try
	{
		Bureaucrat Fli("Fli", 150);
		std::cout << Fli << std::endl;
		Fli.incrementGrade();
		Bureaucrat Gio("Gio", 40);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Gio("Gio", 40);
		Bureaucrat Fra("Fra", 1);
		std::cout << Fra << std::endl;
		Fra.decrementGrade();
		Bureaucrat Fli("Fli", 150);
		Bureaucrat Enz("Enz", 1);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

//&e eccezione catturata
//try tenta di eseguire una parte di codice dove ci potrebbe essere un errore se lo trova utilizza l eccezione associata tramite il trow
/* try = provo a fare questa cosa rischiosa,
throw = se c’è un problema, lancio un’eccezione,
catch = se arriva quell’eccezione, la prendo e la gestisco. */