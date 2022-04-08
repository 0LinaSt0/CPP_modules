/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:02:10 by msalena           #+#    #+#             */
/*   Updated: 2022/04/08 19:55:52 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void){
	array = new T[0];
	sizeArray = 0;
	std::cout 
		<< "Constructor: default for Array" 
		<< std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n){
	array = new T[n]();
	sizeArray = n;
	std::cout << "Constructor: value assignment for Array" 
		<< std::endl;
}

template<typename T>
Array<T>::Array(const Array& other){
	//copy_arr_func
	array = new T[other->sizeArray];
	sizeArray = other.sizeArray;
	for (int i = 0; i < other.sizeArray; i++){
		array[i] = other.array[i];
	}
	std::cout << "Constructor: copy for Array"
			<< std::endl;
}

template<typename T>
Array<T>::~Array(void){
	//delete and std::string
	delete array;
	std::cout << "Destructor: Array done here" 
			<< std::endl;
}

template<typename T>
T&	Array<T>::operator[](unsigned int posititon){
	//take elem to position and return it
	if (sizeArray <= posititon || posititon < 0){
		throw std::exception();
	}
	return array[posititon];
}

template<typename T>
T*	Array<T>::getArray(void) const{
	return array;
}

template<typename T>
unsigned int	Array<T>::size(void) const{
	//for_arr_count
	return sizeArray;
}

