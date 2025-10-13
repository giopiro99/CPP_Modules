/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:57:03 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/17 17:02:19 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	ft_choose_operation()
{
	std::cout << "Please choose operation" << std::endl;
	std::cout << "ADD to adding new contact in the Phone Book" << std::endl;
	std::cout << "SEARCH to searching a contact in the Phone Book" << std::endl;
	std::cout << "EXIT to close the program" << std::endl;
}

int	main()
{
	Phonebook	MyPhoneBook;
	std::string	input;
	int			index;
	
	index = 0;
	do
	{
		ft_choose_operation();
		if (!std::getline(std::cin, input))
			std::exit(1);
		else if (!input.compare("ADD"))
		{
			MyPhoneBook.AddContact(index);
			index++;
			if (index == 8)
				index = 0;
		}
		else if (!input.compare("SEARCH"))
			MyPhoneBook.SearchContact();
		else if (input.compare("EXIT"))
			std::cout << "Invalid input" << std::endl;
	} while (input.compare("EXIT"));
	return (0);
}
