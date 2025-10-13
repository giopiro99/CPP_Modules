/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:49:59 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/17 18:44:11 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>

Contact::Contact()
{

}
Contact::~Contact()
{

}

bool	ft_is_space_string(const std::string Name)
{
	for(unsigned long i = 0; i < Name.length(); i++)
	{
		if (!std::isspace(Name[i]))
			return (false);
	}
	return (true);
}

std::string Contact::GetString(const std::string msg)
{
	std::string string;
	do
	{
		std::cout << msg << std::endl;
		if (!getline(std::cin, string))
			std::exit(1);
		if (string.empty() || ft_is_space_string(string))
			std::cout << "Invalid input, please retry" << std::endl;
	} while (string.empty() || ft_is_space_string(string));
	return (string);
}

void	Contact::SetFirstName()
{
	this->FirstName = GetString("Please insert your name");
}

void	Contact::SetLastName()
{
	this->LastName = GetString("Please enter your Last Name");
}

void	Contact::SetNickName()
{
	this->Nickname = GetString("Please enter your NickName");
}

void	Contact::SetPhoneNumber()
{
	this->PhoneNumber = GetString("Please enter your Phone Number");
}

void	Contact::SetDarkestSecret()
{
	this->DarkestSecret = GetString("Please enter your Secret");
}

std::string Contact::GetFirstName()
{
	return (this->FirstName);
}

std::string Contact::GetLastName()
{
	return (this->LastName);
}

std::string Contact::GetNickName()
{
	return (this->Nickname);
}


std::string Contact::GetPhoneNumber()
{
	return (this->PhoneNumber);
}


std::string Contact::GetDarkestSecret()
{
	return (this->DarkestSecret);
}

