/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:18:50 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 22:33:10 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class	Array{
private:
	T*	array;
public:
	Array ( void );
	Array ( unsigned int n );
	Array ( const Array& other );
	~Array ( void );

	T	operator[] ( unsigned int position );
	
	T*	getArray( void ) const;

	unsigned int	size ( void ) const;
};

#endif