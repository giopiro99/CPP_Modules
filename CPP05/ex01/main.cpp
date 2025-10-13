/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:40:00 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/03 09:42:40 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <ostream>

int main()
{
	try
	{
		Bureaucrat Fli("Fli", 140);
		Fli.incrementGrade();
		Bureaucrat Gio("Gio", 40);
		Bureaucrat Fra("Fra", 1);
		Form Form42("42Form", 2, 1);
		std::cout << Fra << std::endl;
		std::cout << Gio << std::endl;
		std::cout << Form42 << std::endl;
		Gio.signForm(Form42);
		for(int i = 0; i < 39; i++)
			Gio.decrementGrade();
		Fra.signForm(Form42);
		Gio.signForm(Form42);
		std::cout << Form42 << std::endl;
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
		Form Only1Form("Only1Form", 1, 1);
		Bureaucrat Gio("Gio", 1);
		Bureaucrat Fra("Fra", 1);
		std::cout << Fra << std::endl;
		std::cout << Gio << std::endl;
		std::cout << Only1Form << std::endl;
		Fra.signForm(Only1Form);
		Gio.signForm(Only1Form);
		std::cout << Only1Form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

//&e eccezione catturata
//try tenta di eseguire una parte di codice dove ci potrebbe essere un errore se lo trova utilizza l eccezione associata tramite il trow
/* try = provo a fare questa cosa rischiosa,
throw = se c’è un problema, lancio un’eccezione,
catch = se arriva quell’eccezione, la prendo e la gestisco. */