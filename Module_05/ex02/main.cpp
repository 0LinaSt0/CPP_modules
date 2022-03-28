/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2022/03/28 14:53:01 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& inout, const Bureaucrat& bur){
		inout << bur.getName();
	return (inout);
}

/*Grade for different doings:
	a) ShrubberyForm: sign - 145, exec - 137
	b) RobotomyForm: sign - 72, exec - 45
	c) PresidentForm: sign - 25, exec - 5
	
!!! The highest grade is 1 !!!
!!! Form must be signed before executing !!!
*/

int	main (void){
	std::string	palmTarget = "PALM";
	std::string	requestTarget = "REQUEST";
	std::string	presidentialTarget = "WORKER";
	
	ShrubberyCreationForm	s_form(palmTarget);
	RobotomyRequestForm		r_form(requestTarget);
	PresidentialPardonForm	p_form(presidentialTarget);
	
	//BASIC_EXCEPTIONS
	{
		try{
			Bureaucrat A("AaA", 149); // low grade for doings
			Bureaucrat B("BbB", 30); // won't sign form
			// Bureaucrat C("CcC", 151); //forbidden low grade
			
			s_form.beSigned(A);
			s_form.execute(A);
			r_form.execute(B);
		} catch (std::exception&){}
	}

	std::cout << "\t\n~~~~~~~~~~ ~~~~~~~~~~ TRUE STORY ABOUT BRAVE GARFNER ~~~~~~~~~~ ~~~~~~~~~~\n" << std::endl; 
	
	//WORKING_EXEMPLES
	{
		try{
			Bureaucrat	GARD("GARDINER", 110);
			Bureaucrat	MANAG("MANAGER", 30);
			Bureaucrat	MASTER("Zaphod Beeblebrox", 3);

			std::cout << "\n\t~~~"
					<< MASTER 
					<< " is signing three new default forms~~~"
					<< std::endl;
			s_form.beSigned(MASTER);
			r_form.beSigned(MASTER);
			p_form.beSigned(MASTER);
			
			std::cout << "\n\t~~~"
					<< GARD 
					<< " is planting palm~~~"
					<< std::endl;
			s_form.execute(GARD);
			
			std::cout << "\n\t~~~"
					<< MANAG 
					<< " is doing request to robot~~~"
					<< std::endl;
			r_form.execute(MANAG);

			std::cout << "\n\t~~~"
					<< MASTER 
					<< " is sorrying GARDINER for their terrible palm~~~"
					<< std::endl;
			p_form.execute(MASTER);
			std::cout << std::endl;
		} catch (std::exception&){}
	}
	
	//FREE_BLOCK
	ShrubberyCreationForm::deleteTreeMemory();	
}