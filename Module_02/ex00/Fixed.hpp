/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:58:33 by msalena           #+#    #+#             */
/*   Updated: 2022/02/03 16:19:07 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP
#include <iostream>

class	Fixed{
private:
	int					fpNumber;
	static const int	fractBitsNum = 8;
public:
	Fixed( void );
	Fixed( const Fixed& other );//copy
	~Fixed ( void );

	Fixed& operator=( const Fixed& other);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};






#endif
