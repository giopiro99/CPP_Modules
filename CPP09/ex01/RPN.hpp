/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:11:03 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/10/01 11:32:29 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RNP_HPP
# define RNP_HPP

#include <stack>
# include <string>

typedef enum
{
	ADD,
	SUB,
	MULT,
	DIV,
}	operation;

class	RNP
{
	private:
			std::stack<double>	myStack;
			void	executeCalculation(operation currentOperation);
	public:
			RNP();
			RNP(const RNP& other);
			RNP&	operator=(const RNP& other);
			~RNP();
			int	calculation( std::string );
};
#endif