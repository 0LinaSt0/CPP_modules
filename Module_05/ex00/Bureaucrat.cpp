/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:39:05 by msalena           #+#    #+#             */
/*   Updated: 2022/03/20 20:30:52 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string& error){
	std::cout << error << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string& error){
	std::cout << error << std::endl;
}

Bureaucrat::Bureaucrat(void){
	std::cout << "Constructor: default for Bureaucrat" << std::endl;
	hight = "THE HIGHTEST GRADE IS 1";
	low = "THE LOWEST GRADE IS 150";
	// name = "default";
	grade = 1;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) 
										: name (name){
	hight = "THE HIGHTEST GRADE IS 1";
	low = "THE LOWEST GRADE IS 150";	
	if (grade < 1)
		throw GradeTooHighException(hight);
	if (grade > 150)
		throw GradeTooLowException(low);
	this->grade = grade;
	std::cout << "Constructor: value assignment for " 
			<< name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) 
								: name (other.getName()){
	hight = "THE HIGHTEST GRADE IS 1";
	low = "THE LOWEST GRADE IS 150";
	std::cout << "Constructor: copy for " 
			<< name << std::endl;
	Bureaucrat::operator=(other);
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Constructor: Bureacrat done here" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other){
	this->grade = other.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void) const{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const{
	return (this->grade);
}

void	Bureaucrat::increment(void){
	if ((this->grade - 1) < 1)
		throw GradeTooHighException(this->hight);
	this->grade--;
}

void	Bureaucrat::decrement(void){
	if ((this->grade + 1) > 150)
		throw GradeTooLowException(this->low);
	this->grade++;
}