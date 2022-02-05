/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:23:56 by msalena           #+#    #+#             */
/*   Updated: 2022/02/05 18:32:29 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//-->If one, two and tree have one signe	- the point is inside of the triangle
//-->If one, two or three is zero 			- the point is on side of the triangle
//-->All other situations					- the point is not part of triangle
bool bsp( Point const a, Point const b, Point const c, Point const point ){
	int		a_X = ((Point)a).getX().getRawBits();
	int		a_Y = ((Point)a).getY().getRawBits();
	int		b_X = ((Point)b).getX().getRawBits();
	int		b_Y	= ((Point)b).getY().getRawBits();
	int		c_X = ((Point)c).getX().getRawBits();
	int		c_Y = ((Point)c).getY().getRawBits();
	int		p_X = ((Point)point).getX().getRawBits();
	int		p_Y = ((Point)point).getY().getRawBits();

	int	one = ((a_X - p_X) * (b_Y - a_Y) - (b_X - a_X) * (a_Y - p_Y));
	int	two = ((b_X - p_X) * (c_Y - b_Y) - (c_X - b_X) * (b_Y - p_Y));
	int	three = ((c_X - p_X) * (a_Y - c_Y) - (a_X - c_X) * (c_Y - p_Y));

	if ((one > 0 && two > 0 && three > 0)
			|| (one < 0 && two < 0 && three < 0)) {
		return true;
	} else if (one == 0 || two == 0 || three == 0) {
		Point::sideFl = 1;
		return true;
	}
	return false;
}
