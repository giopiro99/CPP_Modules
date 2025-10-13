/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 09:39:15 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/10/01 11:28:23 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>

class BitCoinExhange
{
	private:
			std::map<std::string, std::string> fileDateMap;
			std::map<std::string, std::string>::iterator	iterator;
			std::string	splittedInput[2];
			std::string	currentDate;
	
	public:
			BitCoinExhange();
			BitCoinExhange(const BitCoinExhange&);
			BitCoinExhange&	operator=(const BitCoinExhange&);
			~BitCoinExhange();
			void	findPrice(std::string);
			void	parseLine(std::string);
};

#endif