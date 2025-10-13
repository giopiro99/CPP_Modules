/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:52:12 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/09/12 14:22:20 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template <typename T>
Array<T>::Array() : data(NULL), length(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : length(n)
{
	if (n > 0)
		this->data = new T[n]();
	else
	{
		this->data = NULL;
		this->length = 0;
	}
	//default/value-initialization, a seconda del tipo su cui viene costruito l oggetto, gli elementi vengono inizializzati
	//esempio---> int , inizializza tutti gli elementi a 0
}

template <typename T>
Array<T>::Array(const Array& other)
{
	if (other.data && other.length > 0)
	{
		this->length = other.length;
		this->data = new T[other.length];
		for (unsigned int i = 0; i < other.length; i++)
			this->data[i] = other.data[i];
	}
	else
	{
		this->length = 0;
		this->data = NULL;
	}
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& other)
{
	Array<T>	tmp(other);
	T*			tmpPtr = tmp.data;

	if (this != &other)
	{
		tmp.data = this->data;
		this->length = tmp.length;
		this->data = tmpPtr;
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int index)
{
	if (index < this->length)
		return (this->data[index]);
	else
		throw
			Array<T>::OutOfBoundExeption();
}

template <typename T>
const T&	Array<T>::operator[](unsigned int index) const
{
	if (index < this->length)
			return (this->data[index]);
	else
		throw
			Array<T>::OutOfBoundExeption();
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->length);
}

template <typename T>
const char* Array<T>::OutOfBoundExeption::what() const throw()
{
	return ("Index out of range");
}

template <typename T>
Array<T>::~Array()
{
	if (this->data)
		delete[] this->data;
}