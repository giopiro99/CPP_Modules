/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:13:15 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/10/08 10:21:17 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cstring>
#include <bits/stdc++.h>
#include <stdexcept>

RNP::RNP() {};
RNP::~RNP() {};

RNP::RNP(const RNP& other)
{
	myStack = other.myStack;
}

RNP&	RNP::operator=(const RNP& other)
{
	if (this != &other)
	{
		myStack = other.myStack;
	}
	return (*this);
}

void RNP::executeCalculation(operation currentOperation)
{
	if (myStack.size() < 2) // Controlla che ci siano almeno due numeri nello stack
		throw std::runtime_error("Operation error");

	double result = 0;
	double tmpSecond = myStack.top(); // Prende il secondo operando (in cima allo stack)
	myStack.pop();                    // Lo rimuove dallo stack
	double tmpFirst = myStack.top();  // Prende il primo operando (ora in cima)
	myStack.pop();                    // Lo rimuove dallo stack

	switch (currentOperation)
	{
		case 0:
			result = tmpFirst + tmpSecond;
			myStack.push(result);
			break;
		case 1:
			result = tmpFirst - tmpSecond;
			myStack.push(result);
			break;
		case 2:
			result = tmpFirst * tmpSecond;
			myStack.push(result);
			break;
		case 3:
			if (tmpSecond == 0)
				throw std::runtime_error("division by 0 is invalid");
			result = tmpFirst / tmpSecond;
			myStack.push(result);
			break;
		default:
			break;
	}
}

int RNP::calculation(std::string input)
{
	std::istringstream stream(input); // Converte la stringa in uno stream per leggere parola per parola
	std::string current;

	while(getline(stream, current, ' ')) // Legge ogni elemento separato da spazio
	{
		// Se trova un operatore, esegue l'operazione corrispondente
		if (current.size() == 1 && current[0] == '+')
			executeCalculation(ADD);
		else if (current.size() == 1 && current[0] == '-')
			executeCalculation(SUB);
		else if (current.size() == 1 && current[0] == '*')
			executeCalculation(MULT);
		else if (current.size() == 1 && current[0] == '/')
			executeCalculation(DIV);
		else
		{
			// Converte la stringa in numero
			char* endptr = NULL;
			errno = 0;
			double number = std::strtod(current.c_str(), &endptr);

			// Controlla errori di conversione o valori non validi
			if (*endptr != '\0' || errno == ERANGE || number >= 10)
				throw std::runtime_error("invalid number");

			myStack.push(number);
		}
	}

	// Alla fine ci deve essere un solo valore nello stack ==> il risultato
	if (myStack.size() != 1)
		throw std::runtime_error("number error");
	return (myStack.top());
}
