/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:06:39 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 21:10:42 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	f(T& elem){
	std::cout << elem;
}

template <typename T, typename U>
void	iter(T* arr, U length, void (f)(T&)){
	for (U iter = 0; iter < length; iter++){
		std::cout << "	arr["
				<< iter
				<< "]: ";
		f(arr[iter]);
		std::cout << std::endl;
	}
}

#endif