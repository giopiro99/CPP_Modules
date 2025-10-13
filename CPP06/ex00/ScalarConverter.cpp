/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:48:22 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/23 17:32:29 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <algorithm>
#include <limits>
#include <iomanip>
#include <cmath>

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
/*---------------------------UTILS---------------------------*/
static bool checkDots(const std::string& toConvert, int i)
{
	if (toConvert[i] == '.')
	{
		if (i != 0 && i < (int)toConvert.length() - 1)
		{
			if (std::isdigit(toConvert[i + 1]))
				return (true);
			else
				return (false);
		}
	}
	return (true);
}

static bool	isAValidValue(t_type type)
{
	return (type == CHAR || type == INT || type == FLOAT  || type == DOUBLE);
}

static bool	isSpecialValue(t_type type)
{
	return (type == SPECIALFLOAT || type == SPECIALDOUBLE);
}

static bool checkIntRange(const std::string toConvert)
{
	long	value = std::strtol(toConvert.c_str(), NULL, 10);
	return (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max());
}

static void	getUniversalValue(double *universalValue, t_type type, std::string toConvert)
{
	if (type == CHAR)
		*universalValue = static_cast<double>(toConvert[0]);
	else if (type == INT)
		*universalValue = std::strtol(toConvert.c_str(), NULL, 10);
	else if (type == FLOAT || type == DOUBLE)
		*universalValue = std::strtod(toConvert.c_str(), NULL);
}

static void printChar(double universalValue)
{
	if (universalValue < 0 || universalValue > 127)
		std::cout << "Char: " << "Impossible" << std::endl;
	else if (isprint(static_cast <char>(universalValue)))
		std::cout << "Char: " << static_cast <char>(universalValue) << std::endl;
	else if (universalValue >= 0 && universalValue <= 127)
		std::cout << "Char: " << "Not printable" << std::endl;
}

static void	printInt(std::string toConvert, double universalValue)
{
	if (checkIntRange(toConvert))
		std::cout << "Int: " << static_cast <int>(universalValue) << std::endl;
	else
		std::cout << "Int: Impossible" << std::endl;
}

static void	printDouble(double universalValue)
{
	std::cout << "Double: ";
	if (std::isinf(universalValue) || std::isnan(universalValue))
		std::cout << universalValue << std::endl;
	else
		std::cout << std::fixed << std::setprecision(2) << universalValue << std::endl;
}

static void	printFloat(double universalValue)
{
	float floatValue = static_cast<float>(universalValue);
	std::cout << "Float: ";
	if (std::isinf(floatValue) || std::isnan(floatValue))
		std::cout << floatValue << "f" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(2) << floatValue << "f" << std::endl;
}

static void printingNormalValue(t_type type, std::string toConvert)
{
	double universalValue = 0;
	getUniversalValue(&universalValue, type, toConvert);
	printChar(universalValue);
	printInt(toConvert, universalValue);
	printDouble(universalValue);
	printFloat(universalValue);
}

/*---------------------------METHODS---------------------------*/
void	ScalarConverter::updateCounts()
{
	this->fCount = std::count(this->toConvert.begin(), this->toConvert.end(), 'f');
	this->dotCount = std::count(this->toConvert.begin(), this->toConvert.end(), '.');
}

bool	ScalarConverter::checkInputNumbers()
{
	unsigned int i = 0;
	if (this->toConvert[0] == '-' || this->toConvert[0] == '+')
		i = 1;
	while (i < this->toConvert.length())
	{
		if (this->toConvert[i] == '.')
		{
			if (!checkDots(this->toConvert, i))
				return (false);
		}
		else if (this->toConvert[i] == 'f')
		{
			if (i == this->toConvert.length() - 1)
				return (true);
			else
				return (false);
		}
		else if (!std::isdigit(this->toConvert[i]))
			return (false);
		i++;
	}
	if (this->dotCount < 2 && this->fCount < 2)
		return (true);
	else
		return (false);
}

bool	ScalarConverter::checkInt()
{
	if (checkIntRange(this->toConvert))
		return (true);
	else
		return (false);
}

bool	ScalarConverter::checkFloat()
{
	if (this->fCount == 1 && this->dotCount == 1 && this->toConvert[this->toConvert.length() - 1] == 'f')
		return (true);
	return (false);
}

bool	ScalarConverter::checkDouble()
{
	if (this->fCount == 0 && this->dotCount == 1 )
		return (true);
	return (false);
}

bool	ScalarConverter::getSpecialCase()
{
	std::string	specialFloat[3] = {"-inff", "+inff", "nanf"};
	std::string	specialDouble[3] = {"-inf", "+inf", "nan"};

	for (int i = 0; i < 3; i++)
	{
		if (!this->toConvert.compare(specialFloat[i]))
		{
			this->initialType = SPECIALFLOAT;
			return (true);
		}
		else if (!this->toConvert.compare(specialDouble[i]))
		{
			this->initialType = SPECIALDOUBLE;
			return (true);
		}
	}
	return (false);
}

/*---------------------------IMPORTANT_METHODS---------------------------*/
void	ScalarConverter::recognizeType()
{
	if (this->toConvert.empty())
		throw
			ScalarConverter::UnknownInputException();
	this->updateCounts();
	if (this->toConvert.length() == 1 && !std::isdigit(this->toConvert[0]))
	{
		this->initialType = CHAR;
		return ;
	}
	else
		this->initialType = INT;
	if (this->getSpecialCase())
		return ;
	if (!this->checkInputNumbers())
		throw
			ScalarConverter::UnknownInputException();
	else if (this->fCount == 0 && this->dotCount == 0 && checkInt())
		this->initialType = INT;
	else if (checkFloat())
		this->initialType = FLOAT;
	else if (checkDouble())
		this->initialType = DOUBLE;
}

static void printingSpecialValue(t_type initialType, std::string toConvert)
{
	std::cout << "Char: Unknown" << std::endl;
	std::cout << "Int: Unknown" << std::endl;
	if (initialType == SPECIALFLOAT)
	{
		std::cout << "Float: " << toConvert << std::endl;
		std::cout << "Double: " << toConvert.substr(0, toConvert.length() - 1) << std::endl; 
	}
	else
	{
		std::cout << "Float: " << toConvert + "f"  << std::endl;
		std::cout << "Double: " << toConvert << std::endl;
	}
}


void	ScalarConverter::convert(std::string toConvert)
{
	try
	{		
		ScalarConverter	tmp;
		tmp.toConvert = toConvert;
	
		tmp.recognizeType();
		if (isSpecialValue(tmp.initialType))
			printingSpecialValue(tmp.initialType, toConvert);
		else if (isAValidValue(tmp.initialType))
			printingNormalValue(tmp.initialType, toConvert);
		else
			throw
				ScalarConverter::InvalidInputException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

/*---------------------------EXEPTION---------------------------*/
const char*	ScalarConverter::UnknownInputException::what() const throw()
{
	return("Char: Unknown\n""Int: Unknown\n""Double: Unknown\n""Float: Unknown");
}

const char*	ScalarConverter::InvalidInputException::what() const throw()
{
	return("Invalid input, please retry");
}