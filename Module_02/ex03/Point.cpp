/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:26:40 by msalena           #+#    #+#             */
/*   Updated: 2022/02/05 18:36:26 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	Point::sideFl = 0;

//Constructs and destructs
Point::Point( void ) : x (0), y (0){}

Point::Point ( const float x, const float y ) : x ( x ), y ( y ){}

Point::Point ( const Point& other) : x ( other.x ), y ( other.y ){}

Point::~Point ( void ){}






const Fixed& Point::getX( void ){
	return x;
}
const Fixed& Point::getY( void ){
	return y;
}
