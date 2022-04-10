/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:34:56 by msalena           #+#    #+#             */
/*   Updated: 2022/04/10 18:57:14 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <list>

template <typename T>
class	MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator	iterator;

	iterator	begin(){
		return std::stack<T>::c.begin();
	}
	iterator	end(){
		return std::stack<T>::c.end();
	}
	iterator	rend(){
		return std::stack<T>::c.rend();
	}
};

#endif