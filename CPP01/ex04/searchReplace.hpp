/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchReplace.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:08:20 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/21 10:03:49 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCHREPLACE_HPP
# define SEARCHREPLACE_HPP

# include <string>
# include <fstream>
# include <iostream>

class searchReplace
{
	public:
			static void	replacing(std::ifstream &inFile, std::ofstream &outFile, std::string &s1, std::string &s2);

};
#endif