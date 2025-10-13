/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:45:45 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/11 10:43:43 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>

typedef enum	s_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SPECIALFLOAT,
	SPECIALDOUBLE,
	UNKNOWN,
}	t_type;

class ScalarConverter
{
	private:
			ScalarConverter();
			~ScalarConverter();
			std::string	toConvert;
			t_type	initialType;
			int		dotCount;
			int		fCount;
			bool		checkDouble();
			bool		checkFloat();
			bool		checkInt();
			void		recognizeType();
			bool		checkInputNumbers();
			bool		getSpecialCase();
			void		updateCounts();
	public:
			static void	convert(std::string ToConvert);
			class UnknownInputException : public std::exception
			{
				public:
						virtual const char*	what() const throw();
			};
			class InvalidInputException : public std::exception
			{
				public:
						virtual const char*	what() const throw();
			};
};

#endif