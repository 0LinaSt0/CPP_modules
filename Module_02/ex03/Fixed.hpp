/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:58:33 by msalena           #+#    #+#             */
/*   Updated: 2022/02/04 18:03:24 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <stdio.h>
#include <cmath>

class	Fixed{
private:
	int					fpNumber;
	static const int	fractBitsNum = 8;
public:
	Fixed( void );
	Fixed( const Fixed& other );
	Fixed( const int convert);
	Fixed( const float convert);
	~Fixed ( void );

	Fixed&	operator=( const Fixed& other );
	bool	operator<( const Fixed& other );
	bool	operator>( const Fixed& other );
	bool	operator<=( const Fixed& other );
	bool	operator>=( const Fixed& other );
	bool	operator==( const Fixed& other );
	bool	operator!=( const Fixed& other );
	Fixed&	operator+( const Fixed& other );
	Fixed&	operator-( const Fixed& other );
	Fixed&	operator*( const Fixed& other );
	Fixed&	operator/( const Fixed& other );
	Fixed&	operator++( void );
	Fixed	operator++( int );
	Fixed&	operator--( void );
	Fixed	operator--( int );


	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	static Fixed&	min( Fixed& one, Fixed& two );
	static const Fixed&	min( const Fixed& one, const Fixed& two );
	static Fixed&	max( Fixed& one, Fixed& two );
	static const Fixed&	max( const Fixed& one, const Fixed& two );
};

std::ostream&	operator<<( std::ostream& fig_znaet, const Fixed& one );
int		takeDegree( int num, int degree);





#endif
