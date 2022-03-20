/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:19:26 by msalena           #+#    #+#             */
/*   Updated: 2022/03/20 20:31:30 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& new_){
	//<name>, bureaucrat grade <grade>
	o << new_.getName() 
		<< ", bureaucrat grade "
		<< new_.getGrade();
	return o;
}

int	main(void){
	std::string	uno;
	std::string	dos;
	std::string	tres;
	std::string	quatro;
	
	while (uno.length() == 0){
		std::cout << "Please, call bureaucrat #1: ";
		std::getline(std::cin, uno, '\n');
		std::cout << std::endl;
	}
	while (dos.length() == 0){
		std::cout << "Please, call bureaucrat #2: ";
		std::getline(std::cin, dos, '\n');
		std::cout << std::endl;
	}
	while (tres.length() == 0){
		std::cout << "Please, call bureaucrat #3: ";
		std::getline(std::cin, tres, '\n');
		std::cout << std::endl;
	}
	while (quatro.length() == 0){
		std::cout << "Please, call bureaucrat #4: ";
		std::getline(std::cin, quatro, '\n');
		std::cout << std::endl;
	}

	
	try {
		Bureaucrat	one(uno, 1);
		Bureaucrat	two(dos, 150);
		Bureaucrat	tree(tres, 12);
		// Bureaucrat	four(quatro, 0); // error 

		// one.increment(); // error
		// two.decrement(); // error
		//
		std::cout << one << std::endl;
		one.decrement();
		one.decrement();
		std::cout << one << std::endl;
		//
		std::cout << two << std::endl;
		two.increment();
		two.increment();
		std::cout << two << std::endl;
		
		
	} catch (std::exception& exept) {
		
	}
	return (0);
	
	
}