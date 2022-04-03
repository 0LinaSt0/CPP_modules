/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:02:10 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 22:33:04 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void){
	array = new T[0];
	std::cout 
		<< "Constructor: default for Array" 
		<< std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n){
	array = new T[n]();
	std::cout << "Constructor: value assignment for Array" 
		<< name << std::endl;
}

template<typename T>
Array<T>::Array(const Array& other){
	//copy_arr_func
	std::cout << "Constructor: copy for Array"
			<< std::endl;
}

template<typename T>
Array<T>::~Array(void){
	//delete and std::string
	std::cout << "Destructor: done here Array" 
			<< std::endl;
}

template<typename T>
T	Array<T>::operator[](unsigned int posititon){
	//take elem to position and return it
}

template<typename T>
T*	Array<T>::getArray(void) const{
	return array;
}

template<typename T>
unsigned int	Array<T>::size(void) const{
	//for_arr_count
}

