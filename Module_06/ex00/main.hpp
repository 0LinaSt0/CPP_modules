/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:59:47 by msalena           #+#    #+#             */
/*   Updated: 2022/04/10 19:03:42 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#define IMPOSS "impossible"
#define NON "non displayable"

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

struct	tOverflows{
	int	Int;
	int	Float;
	int	Double;
} ;

bool	compareDoubles(double A, double B);
bool	compareFloats(float A, float B);

void	printChar(int Int, tOverflows* over);
void	printInt(int Int, tOverflows* over);
void	printFloat(float Float, tOverflows* over);
void	printDouble(double Double, tOverflows* over);


#endif