/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseUtils.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:33:54 by msalena           #+#    #+#             */
/*   Updated: 2022/04/10 19:02:06 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate(void){
	time_t	now;
	Base*	New;

	time(&now);
	
	if (now % 5 == 0){
		New = new A;
		std::cout << "\n-->"
				<< "\U0001F170" 
				<< "  was born in this time";
		sleep(1);
	} else if (now % 5 < 2){
		New = new B;
		std::cout << "\n-->"
				<< "\U0001F171" 
				<< "  was born in this time";
		sleep(1);
	} else {
		New = new C;
		std::cout << "\n-->"
				<< "\U0001F172" 
				<< "  was born in this time";
		sleep(1);
	}
	return New;
}

void	identify(Base* p){
	A*	a;
	B*	b;
	C*	c;

	try{
		a = dynamic_cast<A*>(p);
		b = dynamic_cast<B*>(p);
		c = dynamic_cast<C*>(p);
	} catch (std::exception&){
		std::cout << "-->"
				<< "\U0000274C"
				<< EXCEPTION
				<< std::endl;
	} ;
	a ? (std::cout << aTYPE)
		: (b ? (std::cout << bTYPE)
		: (std::cout << cTYPE)); 
}

void	identify(Base& p){
	char	typeFl = 0;
	try {
		A&	a = dynamic_cast<A&>(p);
		(void)a;
		typeFl = 'a';
	} catch (std::exception&){
		try {
			B&	b = dynamic_cast<B&>(p);
			(void)b;
			typeFl = 'b';
		} catch (std::exception&){
			try {
				C&	c = dynamic_cast<C&>(p);
				(void)c;
				typeFl = 'c';
			} catch (std::exception&){
				std::cout << "-->"
							<< "\U0000274C"
							<< EXCEPTION
							<< std::endl;
				return ;
			} ;
		} ;
	} ;
	typeFl == 'a' ? (std::cout << aTYPE)
		: (typeFl == 'b' ? (std::cout << bTYPE)
		: (std::cout << cTYPE));
	std::cout << std::endl;
}