/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:18:50 by msalena           #+#    #+#             */
/*   Updated: 2022/04/08 19:57:05 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template <typename T>
class	Array{
private:
	typedef unsigned int	size_type;

	T*				array;
	size_type	sizeArray;
public:
	Array ( void );
	Array ( size_type n );
	Array ( const Array& other );
	~Array ( void );

	T&	operator[] ( size_type position );

	T*	getArray ( void ) const;

	size_type	size ( void ) const;
};

#endif