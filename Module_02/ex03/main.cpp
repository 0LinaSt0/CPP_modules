/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:33:39 by msalena           #+#    #+#             */
/*   Updated: 2022/02/05 18:41:31 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point	a ( -1.3, 2 );
	Point	b ( 0.5, 0.5 );
	Point	c ( 89, 9.45 );
	Point	point ( 0, 0 );

	if (bsp(a, b, c, point)){
		if (Point::sideFl){
			std::cout << "\033[33m" << "The point is on side of the triangle" << "\033[0m" << std::endl;
		} else {
			std::cout << "\033[32m" << "The point is inside of the triangle" << "\033[0m" << std::endl;
		}
	} else {
		std::cout << "\033[31m" << "The point is not inside of the triangle" << "\033[0m" << std::endl;
	}
	return 0;
}
