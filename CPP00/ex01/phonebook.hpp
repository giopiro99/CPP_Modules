/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:10:01 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/17 17:06:18 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class Phonebook
{
	private:
		Contact	contact[8];
	public:
		Phonebook();
		void	ft_print_all_contacts();
		void	ft_print_index_contact(int index);
		void	AddContact(int index);
		void	SearchContact();
		void	Exit();
		~Phonebook();
};
#endif