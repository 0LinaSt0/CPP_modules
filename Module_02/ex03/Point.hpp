/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:20:59 by msalena           #+#    #+#             */
/*   Updated: 2022/02/04 18:36:22 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point{
private:
	const Fixed	x;
	const Fixed	y;
public:
	Point( void );
	Point( const float x, const float y);
	Point ( const Fixed& other );
	~Point( void );
} ;

bool bsp( Point const a, Point const b, Point const c, Point const point);



















#endif
