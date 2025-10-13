/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 10:11:43 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/10/09 14:19:53 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iterator>
#include <bits/stdc++.h>
#include <limits>

/* =============== CONSTRUCTOR/DESTRUCTOR/OPERATOR =============== */
BitCoinExhange::BitCoinExhange(const BitCoinExhange& other) : fileDateMap(other.fileDateMap)
{
}

BitCoinExhange&	BitCoinExhange::operator=(const BitCoinExhange& other)
{
	if (this != &other)
		fileDateMap = other.fileDateMap;
	return (*this);
}

BitCoinExhange::~BitCoinExhange() {}

/* =============== STATIC FUNCTION =============== */
static void	splitString(std::string input, std::string array[], bool isDate)
{
	std::istringstream stream(input);
	std::string	tmp;
	int	index = 0;
	if (!isDate)
	{
		while(getline(stream, tmp, '|'))
			array[index++] = tmp;
	}
	else
	{
		while(getline(stream, tmp, '-'))
			array[index++] = tmp;
	}
}

static bool isValidChar(char c)
{
	return (c == '|' || c == ',' || c == '-' || c == ' ');
}

static std::string trimSpaces(const std::string& line)
{
	size_t start = line.find_first_not_of(" \t\n\r");
	size_t end = line.find_last_not_of(" \t\n\r");

	if (start == std::string::npos)
		return "";
	else
		return (line.substr(start, end - start + 1));
}

// Controlla che la data sia valida (formato e valori)
static void	checkDate(std::string currentDate)
{
	std::string	splitteDate[3];
	splitString(currentDate, splitteDate, true); // Divide la data in anno, mese e giorno

	int	day = std::atoi(splitteDate[2].c_str());
	int	month = std::atoi(splitteDate[1].c_str());
	int	year = std::atoi(splitteDate[0].c_str());

	// Controlla che l'anno sia nel range accettato
	if (year < 2009 || year > 2050)
	{
		std::cout << year << "==>";
		throw std::runtime_error("invalid year");
	}

	// Normalizza la data e verifica che i valori non cambino
	struct tm	currentTime;
	std::memset(&currentTime, 0, sizeof(struct tm)); // Inizializza la struct a 0
	currentTime.tm_mday = day;
	currentTime.tm_year = year - 1900; // Struttura tm: anno = anno reale - 1900
	currentTime.tm_mon = month - 1;    // Mese da 0 a 11
	std::mktime(&currentTime);         // Normalizza la data

	// Se la normalizzazione ha cambiato i valori, la data è invalida
	if (currentTime.tm_mday != day || currentTime.tm_mon != (month - 1) || currentTime.tm_year != (year - 1900))
	{
		std::cout << currentDate << "==>";
		throw std::runtime_error("invalid date");
	}
}

/* =============== CONSTRUCTOR =============== */
BitCoinExhange::BitCoinExhange()
{
	/* Apre il file data.csv */
	std::ifstream	File("data.csv");
	if (!File)
	{
		throw std::invalid_argument("Error in opening data.csv");
	}

	/* Riempie la mappa con le coppie (data, prezzo) prese dal CSV */
	std::string date, price;
	while(getline(File, date, ',') && getline(File, price))
		fileDateMap.insert(std::make_pair(date, price));

	// Rimuove l’ultima riga del file CSV (se presente)
	fileDateMap.erase(--fileDateMap.end());
}

/* =============== METHODS =============== */
void	BitCoinExhange::parseLine(std::string line)
{
	if (std::count(line.begin(), line.end(), '-') != 2)
		throw std::runtime_error("invalid format string");
	if (std::count(line.begin(), line.end(), '|') != 1)
		throw std::runtime_error("invalid format string, invalid |");

	for (size_t i = 0; i < line.length(); i++)
	{
		if (!std::isdigit(line[i]) && !isValidChar(line[i]))
			throw std::runtime_error("invalid character reconized");
	}

	splitString(line, splittedInput, false);

	for (int i = 0; i < 2; i++)
		splittedInput[i] = trimSpaces(splittedInput[i]);

	currentDate = splittedInput[0];
	checkDate(currentDate);
}

void	BitCoinExhange::findPrice(std::string line)
{
	try
	{
		parseLine(line);

		// Trova la prima data nel file > della data corrente
		std::map<std::string, std::string>::iterator it = fileDateMap.upper_bound(currentDate);

		if (it == fileDateMap.begin())
		{
			std::cout << currentDate;
			throw std::runtime_error("===> No correspondecy founded");
		}
		else
		{
			it--;
			double	btcValue = std::atof(it->second.c_str());
			double	howManyBtc = std::atof(splittedInput[1].c_str());

			if (howManyBtc > 1000)
			{
				std::cout << currentDate << " ====> " << howManyBtc << " ====> ";
				throw std::runtime_error("too large value of btc, invalid value");
			}

			double result = btcValue * howManyBtc;
			if (result > std::numeric_limits<double>::max())
			{
				std::cout << result << "====> ";
				throw std::runtime_error("too large number");
			}
			else
				std::cout << currentDate << "===> " << std::atof(splittedInput[1].c_str())
					<< " = " << std::fixed << std::setprecision(2) << result << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}