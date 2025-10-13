/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:19:50 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/06 15:56:14 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
			const std::string	Name;
			bool				isSigned;
			const int			GradeRequiredToSign;
			const int			GradeRequiredToExe;
	public:
			Form();
			Form(Form& other);
			Form(const std::string Name, const int GradeRequiredToSign, const int GradeRequiredToExe);
			Form& operator=(Form& other);
			std::string	getName() const;
			int			getGradeToSign() const;
			int			getGradeToExe() const;
			bool		getIsSigned() const;
			void		beSigned(const Bureaucrat& Bureaucrat);
			~Form();
			class GradeTooLowException : public std::exception
			{
				public:
					virtual const char*	what() const throw();
			};
			class GradeTooHighException : public std::exception
			{
				public:
					virtual const char*	what() const throw();
			};
};

std::ostream&	operator<<(std::ostream& os, const Form& Form);
#endif