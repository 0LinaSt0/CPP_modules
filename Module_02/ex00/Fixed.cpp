/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:25:44 by msalena           #+#    #+#             */
/*   Updated: 2022/02/03 17:42:46 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ){
	this->fpNumber = 0;
	std::cout << "\033[32m" << "Default constructor called" << "\033[0m" << std::endl;
}

Fixed::Fixed( const Fixed& other){
	std::cout << "\033[34m" << "Copy constructor called" << "\033[0m" << std::endl;
	Fixed::operator=(other);
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->fpNumber;
}

void Fixed::setRawBits( int const raw ){
	this->fpNumber = raw;
}
