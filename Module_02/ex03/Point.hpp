/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:20:59 by msalena           #+#    #+#             */
/*   Updated: 2022/02/05 18:54:25 by msalena          ###   ########.fr       */
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
	static int	sideFl;

	Point( void );
	Point( const float x, const float y);
	Point ( const Point& other );
	~Point( void );

	const Fixed& getX( void );
	const Fixed& getY( void );
} ;

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif



















#endif
