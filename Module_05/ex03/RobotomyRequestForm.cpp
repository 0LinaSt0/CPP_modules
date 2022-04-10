/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:36:11 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 14:14:32 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

std::string	RobotomyRequestForm::noise = "*TERRIBLE DRILLING SOUNDS* - \"";

RobotomyRequestForm::RobotomyRequestForm(void) 
				: Form("ROBOTOMY", 72, 45), target("default"){
	std::cout << "Constructor: default for "
			<< getName() 
			<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
				: Form("ROBOTOMY", 72, 45), target(target){
	std::cout << "Constructor: value assignment for " 
			<< getName()
			<< " with target "
			<<  target
			<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
				: Form(other), target(other.getTarget()){
	std::cout << "Constructor: copy for " 
			<< getName()
			<< " with target "
			<<  target
			<< std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	std::cout << "Destructor: "
			<< getName()
			<< " with target "
			<<  target 
			<< " done here" 
			<< std::endl;
}

const std::string	RobotomyRequestForm::getTarget(void) const{
	return (target);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const{
	beExecute(executor);
	time_t now;

	time (&now);
	std::cout << "--->"
		<< "\U0001F916" << " "
		<< noise;
	if ((now % 2) == 0){
		std::cout << target
				<< " was robotonized "
				<< "successfully in this time.\""
				<< std::endl;
	} else {
		std::cout << "Robot failed "
				<< target
				<< " in this time.\""
				<< std::endl;
	}
}