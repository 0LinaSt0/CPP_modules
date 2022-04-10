/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2022/04/10 19:01:03 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& inout, const Bureaucrat& bur){
		inout << bur.getName();
	return (inout);
}

std::ostream&	operator<<(std::ostream& inout, const Form* form){
	inout << "--->"
		<< "\U0001F9FE" << " "
		<< form->getName()
		<< " form have:" << std::endl
		<< "	singl status: "
		<< form->getIndicSign() << std::endl
		<< "	gradeSign level: "
		<< form->getGradeSign() << std::endl
		<< "	gradeExecute level: "
		<< form->getGradeExecute();
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

	std::cout << "\t\n~~~~~~~~~~ ~~~~~~~~~~ EXAMPLE WITH INTERN ~~~~~~~~~~ ~~~~~~~~~~\n" << std::endl; 
	
	{
		Form* scr = NULL;
		Form* rrf = NULL;
		Form* ppf = NULL;
		try{
			Intern someRandomIntern;
			scr = someRandomIntern.makeForm("shrubbery creation", "TREE");
			rrf = someRandomIntern.makeForm("robotomy request", "ROBOT");
			ppf = someRandomIntern.makeForm("presidential pardon", "PARDON");
			
			Bureaucrat	BRR("BRR", 40);
			
			//without sign
			scr->beSigned(BRR);
			scr->execute(BRR);
			std::cout <<std::endl;

			//everything good
			rrf->beSigned(BRR);
			rrf->execute(BRR);
			std::cout <<std::endl;

			//low grade
			ppf->beSigned(BRR);
			ppf->execute(BRR);

			// std::cout << scr << std::endl;
			std::cout << std::endl;
			
		} catch (std::exception&) {}
		delete scr;
		delete rrf;
		delete ppf;
	}
}