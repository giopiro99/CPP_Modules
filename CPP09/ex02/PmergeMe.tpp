/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpirozzi <gpirozzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:03:06 by gpirozzi          #+#    #+#             */
/*   Updated: 2025/10/08 10:28:49 by gpirozzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>
#include <iterator>
#include <limits>
#include <sstream>
#include <cerrno>
#include <algorithm>
#include <utility>
#include <vector>
#include <time.h>
#include <sys/time.h>
#include <iostream>

/* --------------------STATIC ARRAY-------------------- */
template <typename container>
const unsigned int PmergeMe<container>::jacob[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923,
	21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405,
	11184811, 22369621, 44739243, 89478485, 178956971, 357913941, 715827883, 1431655765};

/* --------------------STATIC FUNCTION-------------------- */
static long	getCurrentTime()
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1e6) + (tv.tv_usec));
}

/* --------------------CONSTRUCTOR-------------------- */
template <typename container>
PmergeMe<container>::PmergeMe()
{
}

template <typename container>
PmergeMe<container>::PmergeMe(const PmergeMe& other)
{
	c = other.c;
}


template <typename container>
PmergeMe<container>&	PmergeMe<container>::operator=(const PmergeMe<container>& other)
{
	if (this != &other)
	{
		c = other.c;
	}
	return (*this);
}

/* --------------------METHODS-------------------- */
template <typename container>
container&	PmergeMe<container>::getContainer()
{
	return (c);
}

// -------------------- BINARY SEARCH --------------------
// Trova la posizione corretta dove inserire "value" all’interno di un intervallo ordinato [begin, end).
// Restituisce l’iteratore al punto in cui inserire.
template <typename container>
typename container::iterator PmergeMe<container>::binarySearch(iterator begin, iterator end, int value)
{
	while (begin < end)
	{
		// Calcola l’iteratore a metà intervallo
		iterator mid = begin + std::distance(begin, end) / 2;

		if (*mid == value)
			return mid;         // trovato esattamente il valore
		else if (*mid > value)
			end = mid;          // restringi a [begin, mid)
		else
			begin = mid + 1;    // restringi a (mid, end)
	}

	// Se non trovato, ritorna la posizione in cui inserirlo mantenendo l’ordine
	return begin;
}


// -------------------- BINARY INSERT --------------------
// Inserisce un elemento da "pendant" nella posizione corretta dentro "c".
// Usa binarySearch per trovare la posizione giusta, con attenzione ai vincoli delle coppie.
template <typename container>
void PmergeMe<container>::binaryInsert(container pendant, std::vector< std::pair<int, int> > pairs, int i, int forEverAlone)
{
	iterator position;

	// Caso particolare: se l’elemento è il "forEverAlone" (l’elemento dispari messo da parte),
	// non c’è un limite superiore. Lo si cerca su tutto c.
	if (forEverAlone == pendant[i])
		position = binarySearch(c.begin(), c.end(), pendant[i]);
	else
	{
		// Altrimenti, bisogna rispettare il vincolo che ogni "min" (pendant[i])
		// non può essere inserito oltre il suo "max" corrispondente.
		iterator searchLimit = c.end();

		// Trova il "second" (max) della coppia di cui pendant[i] è il "first" (min).
		for (size_t j = 0; j < pairs.size(); j++)
		{
			if (pairs[j].first == pendant[i])
			{
				// Limita la ricerca all’elemento max trovato
				searchLimit = std::find(c.begin(), c.end(), pairs[j].second);
				break;
			}
		}

		// Inserisci pendant[i] in [begin, searchLimit) nella posizione ordinata
		position = binarySearch(c.begin(), searchLimit, pendant[i]);
	}

	// Inserisci effettivamente l’elemento nella posizione calcolata
	c.insert(position, pendant[i]);
}

template <typename container>
long	PmergeMe<container>::getEndTime()
{
	return (endTime);
}

template <typename container>
void	PmergeMe<container>::isSorted()
{
	for (size_t i = 1; i < c.size(); ++i)
	{
		if (c[i-1] > c[i])
		{
			std::cout << "Not sorted ❌" << std::endl;
			return ;
		}
	}
	std::cout << "Sorted ✅" << std::endl;
}

template <typename container>
void PmergeMe<container>::sort()
{
	std::vector< std::pair<int,int> > pairs; // contiene coppie (min, max) dei numeri presi a due a due
	container pendant;                       // contiene gli elementi "min" da reinserire successivamente
	int forEverAlone = -1;                   // salva l’ultimo elemento se la dimensione del contenitore è dispari

	startTime = getCurrentTime();

	//Se il numero di elementi è dispari, togli l’ultimo e mettilo da parte
	if (c.size() % 2 != 0) 
	{
		forEverAlone = c.back();
		c.pop_back();
	}

	//Forma coppie (min, max) da tutti gli elementi rimanenti
	for (size_t i = 0; i < c.size(); i += 2)
	{
		if (c[i] < c[i + 1])
			pairs.push_back(std::make_pair(c[i], c[i + 1]));
		else
			pairs.push_back(std::make_pair(c[i + 1], c[i]));
	}

	//Pulisci c e tieni solo i "max" delle coppie
	c.clear();
	for (size_t i = 0; i < pairs.size(); i++)
		c.push_back(pairs[i].second);

	//Se ci sono più di 1 "max", ordinali ricorsivamente
	if (c.size() > 1)
		sort();

	//Ricostruisci il vettore pendant con i "min" corrispondenti ai max già ordinati
	for (size_t i = 0; i < c.size(); i++)
	{
		for (size_t j = 0; j < pairs.size(); j++)
		{
			if (c[i] == pairs[j].second)
				pendant.push_back(pairs[j].first);
		}
	}

	//Se esisteva un elemento dispari, aggiungilo a pendant
	if (forEverAlone != -1)
		pendant.push_back(forEverAlone);

	//Calcola quanti elementi gestire con la sequenza di Jacobsthal
	int maxJacob = std::upper_bound(jacob, jacob + 32, pendant.size()) - jacob - 1;

	//Inserisci il primo pendant in testa
	c.insert(c.begin(), pendant[0]);

	//Inserisci i restanti pendant seguendo gli intervalli Jacobsthal
	for (int k = 1; k <= maxJacob; k++)
	{
		int start = jacob[k] - 1;
		int end   = jacob[k - 1];
		for (int i = start; i >= end; i--)
			binaryInsert(pendant, pairs, i, forEverAlone);
	}

	//Inserisci eventuali pendant rimasti fuori dall’intervallo Jacobsthal
	for (size_t k = jacob[maxJacob]; k < pendant.size(); k++)
		binaryInsert(pendant, pairs, k, forEverAlone);

	endTime = getCurrentTime() - startTime;
}

