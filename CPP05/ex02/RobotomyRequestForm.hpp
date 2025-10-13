/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:32:19 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/08/07 15:35:10 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include "AForm.hpp"
class	RobotomyRequestForm : virtual public AForm
{
	private:
			std::string	target;
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string& target);
			RobotomyRequestForm(RobotomyRequestForm& other);
			RobotomyRequestForm& operator=(RobotomyRequestForm& other);
			void	executeAction() const;
			~RobotomyRequestForm();
};

/* RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises, then informs that <target> has been robotomized
successfully 50% of the time. Otherwise, it informs that the robotomy failed */
#endif