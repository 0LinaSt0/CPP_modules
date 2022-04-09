/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:57:52 by msalena           #+#    #+#             */
/*   Updated: 2022/04/09 21:39:50 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <algorithm>

class	Span{
private:
	unsigned int	sizeArr;
	unsigned int	indexNextLastElem;
	int*			intArr;
public:
	Span ( void );
	Span ( unsigned int size );
	Span ( const Span& other );
	~Span ( void );

	void	addNumber ( int added );
	template <class T>
	void	addNumbers ( T& arr ){
		for (size_t i = 0; i != arr.size(); i++){
			addNumber(arr[i]);
		}
	}
	int		shortestSpan ( void );
	int		longestSpan ( void );
};

#endif