/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:09:44 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/17 17:14:47 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstdlib>

bool	ft_is_space_string(const std::string Name);

class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		Contact();
		void			SetFirstName();
		void			SetLastName();
		void			SetNickName();
		void			SetPhoneNumber();
		void			SetDarkestSecret();
		std::string		GetString(const std::string msg);
		std::string		GetFirstName();
		std::string		GetLastName();
		std::string		GetNickName();
		std::string		GetPhoneNumber();
		std::string		GetDarkestSecret();
		~Contact();
};

#endif