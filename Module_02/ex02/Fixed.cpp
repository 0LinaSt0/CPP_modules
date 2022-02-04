/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:25:44 by msalena           #+#    #+#             */
/*   Updated: 2022/02/04 18:12:09 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors & destructors

Fixed::Fixed( void ){
	std::cout << "\033[32m" << "Default constructor called" << "\033[0m" << std::endl;
	this->fpNumber = 0;
}

Fixed::Fixed( const Fixed& other){
	std::cout << "\033[34m" << "Copy constructor called" << "\033[0m" << std::endl;
	Fixed::operator=(other);
}

Fixed::Fixed( const int convert ){
	std::cout << "Int constructor called" << std::endl;
	this->fpNumber = convert * takeDegree(2, Fixed::fractBitsNum);
}

Fixed::Fixed( const float convert){
	std::cout << "Float constructor called" << std::endl;
	this->fpNumber = roundf(convert * takeDegree(2, Fixed::fractBitsNum));
}

Fixed::~Fixed( void ){
	std::cout << "\033[31m" << "Destructor called" << "\033[0m" << std::endl;
}
////////////////////////////////

//Operators redefinition

Fixed&	Fixed::operator=( const Fixed& other ){
	std::cout << "\033[35m" << "Copy assignment operator called" << "\033[0m" << std::endl;
	setRawBits(other.getRawBits());
	return *this;
}

bool	Fixed::operator<( const Fixed& other ){
	if(getRawBits() < other.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>( const Fixed& other ){
	if(getRawBits() > other.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=( const Fixed& other ){
	if(getRawBits() <= other.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=( const Fixed& other ){
	if(getRawBits() >= other.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==( const Fixed& other ){
	if(getRawBits() == other.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=( const Fixed& other ){
	if(getRawBits() != other.getRawBits())
		return true;
	return false;
}

Fixed&	Fixed::operator+( const Fixed& other ){
	setRawBits(getRawBits() + other.getRawBits());
	return *this;
}

Fixed&	Fixed::operator-( const Fixed& other ){
	setRawBits(getRawBits() - other.getRawBits());
	return *this;
}

Fixed&	Fixed::operator*( const Fixed& other ){
	setRawBits(roundf((getRawBits() * other.getRawBits())
					/ takeDegree(2, Fixed::fractBitsNum)));
	return *this;
}

Fixed&	Fixed::operator/( const Fixed& other ){
	setRawBits(roundf((getRawBits() * other.getRawBits())
					/ takeDegree(2, Fixed::fractBitsNum)));
	return *this;
}

Fixed&	Fixed::operator++( void ){
	setRawBits(getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator++( int ){
	Fixed tmp = *this;

	++*this;
	return tmp;
}

Fixed&	Fixed::operator--( void ){
	setRawBits(getRawBits() - 1);
	return *this;
}

Fixed	Fixed::operator--( int ){
	Fixed tmp = *this;

	--*this;
	return tmp;
}
///////////////////////////////

//Methods

int Fixed::getRawBits( void ) const{
	return this->fpNumber;
}

void Fixed::setRawBits( int const raw ){
	this->fpNumber = raw;
}

float Fixed::toFloat( void ) const{
	float	n = (float)getRawBits() / takeDegree(2, Fixed::fractBitsNum);
	return (n);
}

int Fixed::toInt( void ) const{
	return (getRawBits() / takeDegree(2, Fixed::fractBitsNum));
}
///////////////////////////////

//Static methods

Fixed&	Fixed::min( Fixed& one, Fixed& two ){
	return ((one.getRawBits() < two.getRawBits()) ? one : two);
}
const Fixed&	Fixed::min( const Fixed& one, const Fixed& two ){
	return ((one.getRawBits() < two.getRawBits()) ? one : two);
}
Fixed&	Fixed::max( Fixed& one, Fixed& two ){
	return ((one.getRawBits() > two.getRawBits()) ? one : two);
}
const Fixed&	Fixed::max( const Fixed& one, const Fixed& two ){
	return ((one.getRawBits() > two.getRawBits()) ? one : two);
}
//////////////////////////////

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

