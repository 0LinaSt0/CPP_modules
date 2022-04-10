/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:03:57 by msalena           #+#    #+#             */
/*   Updated: 2022/04/10 12:41:39 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : sizeArr(0), indexNextLastElem(0){
	intArr = new int[0];

	std::cout << "Constructor: default for Span" 
		<< std::endl;
}

Span::Span(unsigned int size) : sizeArr(size), indexNextLastElem(0){
	intArr = new int[size];
	std::cout << "Constructor: value assignment for Span" 
		<< std::endl;
}

Span::Span(const Span& other) 
			: sizeArr(other.sizeArr), indexNextLastElem(other.sizeArr){
	intArr = new int[other.sizeArr];
	for (size_t i=0; i < other.sizeArr; i++){
		intArr[i] = other.intArr[i];
	}
	std::cout << "Constructor: copy for Span"
			<< std::endl;
}

Span::~Span(void){
	delete intArr;
	std::cout << "Destructor: Array done here" 
			<< std::endl;
}

void	Span::addNumber(int added){
	if (indexNextLastElem == sizeArr || added < 0)
		throw std::exception();
	intArr[indexNextLastElem] = added;
	indexNextLastElem++;
}

int	Span::shortestSpan(void){
	int	minSpan;
	int	firstFl = 0;

	if (indexNextLastElem < 2){
		throw std::exception();
	}
	for (size_t i = 0; i < indexNextLastElem; i++){
		for (size_t z=0; z < indexNextLastElem; z++){
			if (intArr[i] >= intArr[z] && z != i){
				if (!firstFl){
					minSpan = intArr[i] - intArr[z];
					firstFl++;
				} else {
					minSpan = std::min(minSpan, (intArr[i] - intArr[z]));
				}
			}
		}
	}
	return (minSpan);
}

int	Span::longestSpan(void){
	int	minNumb = intArr[0];
	int maxNumb = intArr[0];
	if (indexNextLastElem < 2){
		throw std::exception();
	}
	for (size_t i = 1; i < indexNextLastElem; i++){
		minNumb = std::min(minNumb, intArr[i]);
		maxNumb = std::max(maxNumb, intArr[i]);
	}
	return (maxNumb - minNumb);
}