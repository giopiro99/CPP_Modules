/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:06:25 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/17 17:04:49 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{

}

Phonebook::~Phonebook()
{

}
void	Phonebook::AddContact(int index)
{
	this->contact[index].SetFirstName();
	this->contact[index].SetLastName();
	this->contact[index].SetNickName();
	this->contact[index].SetPhoneNumber();
	this->contact[index].SetDarkestSecret();
	std::cout << "New contact saved" << std::endl;
}

std::string	resize_string(std::string str)
{
	int	len;
	
	len = str.length();
	if (len > 9)
		str.erase(10).replace(9, 1, 1, '.');
	else
		str.resize(10, ' ');
	return (str);
}

void	Phonebook::ft_print_all_contacts()
{
	for (int index = 0; index < 8; index++)
	{
		if (!this->contact[index].GetFirstName().empty())
		{
			std::cout << index << '|';
			std::cout << resize_string(this->contact[index].GetFirstName());
			std::cout << '|';
			std::cout << resize_string(this->contact[index].GetLastName());
			std::cout << '|';
			std::cout << resize_string(this->contact[index].GetNickName());
			std::cout << '|';
			std::cout << std::endl;
		}
	}
}

void	Phonebook::ft_print_index_contact(int index)
{
	if (index <= 7)
	{
		std::cout << this->contact[index].GetFirstName() << std::endl;
		std::cout << this->contact[index].GetLastName() << std::endl;
		std::cout << this->contact[index].GetNickName() << std::endl;
		std::cout << this->contact[index].GetPhoneNumber() << std::endl;
		std::cout << this->contact[index].GetDarkestSecret() << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << "invalid index" << std::endl;
}

bool	ft_check_valid_input(std::string str)
{
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

void	Phonebook::SearchContact()
{
	int	index;
	std::string	ContactToSearch;

	if (this->contact[0].GetFirstName().empty())
	{
		std::cout << "Contacts not avaible" << std::endl;
		return ;
	}
	ft_print_all_contacts();
	std::cout << "Please enter the contact to display" << std::endl;
	if (!getline(std::cin, ContactToSearch))
		std::exit(1);
	if (ft_check_valid_input(ContactToSearch))
	{
		index = std::atoi(ContactToSearch.c_str());
		if (index > 7 || this->contact[index].GetFirstName().empty())
		{
			std::cout << "Contact not avaible" << std::endl;
			return ;
		}
		else
			ft_print_index_contact(index);	
	}
	else
		std::cout << "Invalid input detected" << std::endl;
}
