/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:27:25 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 14:12:27 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <unistd.h>
#include <time.h>

#define aTYPE "A"
#define bTYPE "B"
#define cTYPE "C"
#define EXCEPTION "something wrong with Base link"


class	Base{
public:
	virtual ~Base ( void ){};
} ;

class	A : public Base{};

class	B : public Base{};

class	C : public Base{};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif