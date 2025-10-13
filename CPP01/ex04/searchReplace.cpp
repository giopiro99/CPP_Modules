/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchReplace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:57:14 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/21 14:14:33 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "searchReplace.hpp"

void	searchReplace::replacing(std::ifstream& inFile, std::ofstream& outFile, std::string& s1, std::string& s2)
{
	std::string	currentLine;
	unsigned long	position = 0;
	
	while (!inFile.eof())
	{		
		position = 0;
		getline(inFile, currentLine);
		while((position = currentLine.find(s1, position)) != std::string::npos)
		{
			currentLine.erase(position,s1.length());
			currentLine.insert(position, s2);
			position += s2.length();
		}
		outFile << currentLine;
		outFile << std::endl;
	}
}