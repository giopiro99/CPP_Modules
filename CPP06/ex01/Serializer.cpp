/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:44:43 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/18 16:27:35 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/* static_cast
-controlla a compile-time
-serve per conversioni “logiche”, classi, numeri
-può cambiare bit se conversione numerica
reinterpret_cast
-nessun controllo-conversioni “grezze” tra tipi incompatibili
-“reinterpreta i bit” prende lo stesso blocco di memoria
e lo legge come se fosse di un altro tipo, senza modificarne il contenuto.*/
uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}