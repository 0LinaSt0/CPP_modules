/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:59:47 by msalena           #+#    #+#             */
/*   Updated: 2022/04/02 21:27:10 by msalena          ###   ########.fr       */
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

typedef struct	tOverflows{
	int	Int;
	int	Float;
	int	Double;
}sOverflows;

bool	compareDoubles(double A, double B);
bool	compareFloats(float A, float B);

void	printChar(int Int, tOverflows* over);
void	printInt(int Int, tOverflows* over);
void	printFloat(float Float, tOverflows* over);
void	printDouble(double Double, tOverflows* over);


#endif