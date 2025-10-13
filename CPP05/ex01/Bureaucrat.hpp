/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:40:03 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/06 16:03:35 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Form;

class	Bureaucrat
{
	private:
			const std::string	Name;
			int					Grade;
	public:
			Bureaucrat();
			Bureaucrat(const std::string Name, int Grade);
			Bureaucrat(const Bureaucrat& other);
			Bureaucrat&	operator=(const Bureaucrat& other);
			const std::string	getName() const;
			int					getGrade() const;
			void				incrementGrade();
			void				decrementGrade();
			void				signForm(Form& Form);
			~Bureaucrat();
			class GradeTooHighException : public std::exception
			{
				public:
						virtual const char*	what() const throw();
			};
			class GradeTooLowException : public std::exception
			{
				public:
						virtual const char*	what() const throw();
			};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);

#endif