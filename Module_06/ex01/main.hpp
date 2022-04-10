/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:44:40 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 11:20:54 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <stdint.h>
#include <iostream>
#include <string>

typedef struct Data{
	std::string	whoIam;
	uintptr_t	myIntaddress;
}Data;


#endif