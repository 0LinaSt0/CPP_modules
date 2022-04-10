/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:37:47 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 15:42:59 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void	delete_all(std::string **bur_name){
	delete bur_name[0];
	delete bur_name[1];
	delete bur_name[2];
	delete bur_name;
}

std::string	**take_new_bureaucrats(void){
	std::string **buers = new (std::string*);
	
	std::string	*first = new std::string;
	std::string	*second = new std::string;
	std::string *third = new std::string;

	while (first->length() == 0){
		std::cout << "Please, call bureaucrat #1: ";
		std::getline(std::cin, *first, '\n');
		std::cout << std::endl; 
	}
	while (second->length() == 0){
		std::cout << "Please, call bureaucrat #2: ";
		std::getline(std::cin, *second, '\n');
		std::cout << std::endl;
	}
	while (third->length() == 0){
		std::cout << "Please, call bureaucrat #3: ";
		std::getline(std::cin, *third, '\n');
		std::cout << std::endl;
	}
	
	buers[0] = first;
	buers[1] = second;
	buers[2] = third;
	return (buers);
}

std::ostream&	operator<<(std::ostream& inout, const Bureaucrat& bur){
	inout << "--->"
		<< "\U0001F4BC" << " "
		<< bur.getName() 
		<< ", bureaucrat grade "
		<< bur.getGrade();
	return (inout);
}

std::ostream&	operator<<(std::ostream& inout, const Form& form){
	inout << "--->"
		<< "\U0001F9FE" << " "
		<< form.getName()
		<< " form have:" << std::endl
		<< "	singl status: "
		<< form.getIndicSign() << std::endl
		<< "	gradeSign level: "
		<< form.getGradeSign() << std::endl
		<< "	gradeExecute level: "
		<< form.getGradeExecute();
	return (inout); 
}

int	main (void){
	
	/////////////TAKE_NEW_BUREAUCRATS//////////
	std::string **bur_name = take_new_bureaucrats();
	
	
	
	/////////////BUREAUCRATS_GRADES//////////

	try{
		Bureaucrat	one(*(bur_name[0]), 3);
		Bureaucrat	two(*(bur_name[1]), 150);
		Bureaucrat	tree(*(bur_name[2]), 1);
		std::cout << std::endl;
		// two.decrement(); // error if
		//
		std::cout << one << std::endl;
		one.decrement();
		one.decrement();
		std::cout << one << std::endl;
		//
		// tree.increment(); // error
		//
		std::cout << two << std::endl;
		two.increment();
		two.increment();
		std::cout << two << std::endl;

		////////////LET SIGN NEW FORM///////////
		Form	report("REPORT", 1, 14);
		// Form	report2("REPORT2", 1, 151); //error

		report.beSigned(one);
		// report.beSigned(two);//error

		std::cout << report << std::endl;
		std::cout << std::endl;
	} catch (std::exception& exept){}

	
	delete_all(bur_name);
	
}