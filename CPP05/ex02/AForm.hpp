/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:19:50 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/07 17:17:06 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class AForm
{
	private:
			const std::string	Name;
			bool				isSigned;
			const int			GradeRequiredToSign;
			const int			GradeRequiredToExe;
	public:
			AForm();
			AForm(AForm& other);
			AForm(const std::string Name, const int GradeRequiredToSign, const int GradeRequiredToExe);
			AForm& operator=(AForm& other);
			std::string	getName() const;
			int				getGradeToSign() const;
			int				getGradeToExe() const;
			bool			getIsSigned() const;
			void			beSigned(const Bureaucrat& Bureaucrat);
			void			execute(Bureaucrat const & executor) const;
			virtual void	executeAction() const = 0;
			virtual ~AForm();
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
			class FormNotSigned : public std::exception
			{
				public:
					virtual const char*	what() const throw();
			};
			class GradeTooLowExecutionException : public std::exception
			{
				public:
					virtual const char*	what() const throw();
			};
};

std::ostream&	operator<<(std::ostream& os, const AForm& AForm);
#endif