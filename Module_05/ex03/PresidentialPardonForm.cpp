/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:07:17 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 17:12:51 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
					: Form("PRESIDENTAIL", 25, 5), target("default"){
	std::cout << "Constructor: default for "
			<< getName() 
			<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
					: Form("PRESIDENTAIL", 25, 5), target(target){
	std::cout << "Constructor: value assignment for " 
			<< getName()
			<< " with target "
			<<  target
			<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
					: Form("PRESIDENTAIL", 25, 5), target(other.getTarget()){
	std::cout << "Constructor: copy for " 
			<< getName()
			<< " with target "
			<<  target
			<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	std::cout << "Destructor: "
			<< getName()
			<< " with target "
			<<  target 
			<< " done here" 
			<< std::endl;
}

const std::string	PresidentialPardonForm::getTarget(void) const{
	return (target);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const{
	beExecute(executor);
	std::cout << "--->"
			<< "\U0001F468" << " "
			<< target
			<< " has been pardoned"
			<< std::endl;
}