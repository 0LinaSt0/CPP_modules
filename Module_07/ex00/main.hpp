/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:58:13 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 20:05:27 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>

template <typename T>
void	swap(T& a, T& b){
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T a, T b){
	if (b > a){
		return a;
	}
	return b;
}

template <typename T>
T	max(T a, T b){
	if (a > b){
		return a;
	}
	return b;
}

#endif