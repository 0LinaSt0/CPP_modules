/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:18:53 by msalena           #+#    #+#             */
/*   Updated: 2022/03/28 17:04:59 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
static int	compareFunc(const std::string& nameForm);

Intern::Intern(void){
	std::cout << "Constructor: default for Intern" 
			<< std::endl;
}

Intern::Intern(const std::string& nameForm, const std::string& targetForm){
	std::cout << "Constructor: value assignment for Intern" 
			<< std::endl;
	makeForm(nameForm, targetForm);
}

Intern::Intern(const Intern& other){
	(void)other;
	std::cout << "Constructor: copy for Intern"
			<< std::endl;
}

Intern::~Intern(void){
	std::cout << "Destructor: Intern done here" 
			<< std::endl;
}

Form*	Intern::makeForm(const std::string& nameForm, const std::string& targetForm){
	int	name = compareFunc(nameForm);
	
	switch (name){
	case 0:
		return new ShrubberyCreationForm(targetForm);
	case 1:
		return new RobotomyRequestForm(targetForm);
	case 2:
		return new PresidentialPardonForm(targetForm);
	default:
		return NULL;
	}
}

static int	compareFunc(const std::string& nameForm){
	std::string	names[3] = {
		"shrubbery creation", 
		"robotomy request", 
		"presidential pardon"
	};
	int	i = 0;

	while (i < 3 && names[i].compare(nameForm)){
		i++;
	}
	return (i);
}