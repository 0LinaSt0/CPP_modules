/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:25:44 by msalena           #+#    #+#             */
/*   Updated: 2022/02/04 18:12:17 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ){
	std::cout << "\033[32m" << "Default constructor called" << "\033[0m" << std::endl;
	this->fpNumber = 0;
}

Fixed::Fixed( const Fixed& other){
	std::cout << "\033[34m" << "Copy constructor called" << "\033[0m" << std::endl;
	Fixed::operator=(other);
}

//converts it to the corresponding fixed-point value. The fractional bits value is
//initialized to 8 like in exercise 00
Fixed::Fixed( const int convert ){
	std::cout << "Int constructor called" << std::endl;
	this->fpNumber = convert * takeDegree(2, Fixed::fractBitsNum);
}

//converts it to the corresponding fixed-point value. The fractional bits value is
//initialized to 8 like in exercise 00.
Fixed::Fixed( const float convert){
	std::cout << "Float constructor called" << std::endl;
	this->fpNumber = roundf(convert * takeDegree(2, Fixed::fractBitsNum));
}

Fixed::~Fixed( void ){
	std::cout << "\033[31m" << "Destructor called" << "\033[0m" << std::endl;
}

Fixed&	Fixed::operator=( const Fixed& other ){
	std::cout << "\033[35m" << "Copy assignment operator called" << "\033[0m" << std::endl;
	this->fpNumber = other.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const{
	return this->fpNumber;
}

void Fixed::setRawBits( int const raw ){
	this->fpNumber = raw;
}

//converts the fixed-point value to a floating-point value: revers
float Fixed::toFloat( void ) const{
	float	n = (float)getRawBits() / takeDegree(2, Fixed::fractBitsNum);
	return (n);
}

//converts the fixed-point value to an integer value: revers
int Fixed::toInt( void ) const{
	return (getRawBits() / takeDegree(2, Fixed::fractBitsNum));
}


//FOLLOWING FUNCTIONS

std::ostream&	operator<<( std::ostream& fig_znaet, const Fixed& one ){
	float ret = ((float)one.getRawBits() / (float)takeDegree(2, 8));

	fig_znaet << ret;
	return fig_znaet;
}

int		takeDegree( int num, int degree){

	if (degree != 0){
		return (num * takeDegree(num, (degree - 1)));
	} else {
		return 1;
	}
}

