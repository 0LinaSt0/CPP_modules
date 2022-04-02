/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printNumbers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:59:37 by msalena           #+#    #+#             */
/*   Updated: 2022/04/02 21:26:59 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	printChar(int Int, tOverflows* over){
	std::cout << "char: ";
	if (over->Int || Int < -128 || Int > 127){
		std::cout << IMPOSS << std::endl;
	} else if (!(Int > 31 && Int < 127)) {
		std::cout << NON << std::endl;
	} else {
		std::cout << "\'"
				<< static_cast<char>(Int)
				<< "\'" 
				<< std::endl;
	}
}

void	printInt(int Int, tOverflows* over){
	std::cout << "int: ";
	if (over->Int){
		std::cout << IMPOSS << std::endl;
	} else {
		std::cout << Int << std::endl;
	}
}

void	printFloat(float Float, tOverflows* over){
	std::cout << "float: ";
	if (over->Float){
		std::cout << IMPOSS << std::endl;
	} else {
		std::cout << std::fixed
				<< std::setprecision(1)
				<< Float
				<< 'f'
				<< std::endl;
	}
}

void	printDouble(double Double, tOverflows* over){
	std::cout << "double: ";
	if (over->Double){
		std::cout << IMPOSS << std::endl;
	} else {
		std::cout << std::fixed
				<< std::setprecision(1)
				<< Double
				<< std::endl;
	}
}

