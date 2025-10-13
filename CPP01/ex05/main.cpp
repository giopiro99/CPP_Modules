/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:11:49 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/07/21 11:04:52 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl HarlClass;

	HarlClass.complain("DEBUG");
	HarlClass.complain("INFO");
	HarlClass.complain("WARNING");
	HarlClass.complain("ERROR");
	return (0);
}