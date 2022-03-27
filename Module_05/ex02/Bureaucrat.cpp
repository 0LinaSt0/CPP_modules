/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:39:05 by msalena           #+#    #+#             */
/*   Updated: 2022/03/27 19:58:20 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& error){
	if(error.compare("NON"))
		std::cout << error << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& error){
	if(error.compare("NON"))
		std::cout << error << std::endl;
}

Bureaucrat::Bureaucrat(void) : name ("default"){
	std::cout << "Constructor: default for Bureaucrat" << std::endl;
	grade = 1;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) 
										: name (name){	
	if (grade < 1)
		throw GradeTooHighException(HIGHT);
	if (grade > 150)
		throw GradeTooLowException(LOW);
	this->grade = grade;
	std::cout << "Constructor: value assignment for " 
			<< name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) 
								: name (other.getName()){
	std::cout << "Constructor: copy for " 
			<< name << std::endl;
	Bureaucrat::operator=(other);
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Destructor: "
			<< name << " done here" 
			<< std::endl;
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
	if ((this->grade - 1) < 1){
		std::cout << "--->" 
				<< "\U0000274C" << " "
				<< name
				<< " HAVE ALREADY "
				<< grade
				<< " GRADE. ";
		throw GradeTooHighException(HIGHT);
	}
	this->grade--;
}

void	Bureaucrat::decrement(void){
	if ((this->grade + 1) > 150){
		std::cout << "--->" 
				<< "\U0000274C" << " "
				<< name
				<< " HAVE ALREADY "
				<< grade
				<< " GRADE. ";
		throw GradeTooLowException(LOW);
	}
	this->grade++;
}

void	Bureaucrat::signForm(const std::string& nameForm,
						const std::string& reason) const{
	if (!reason.compare("NON")){
		std::cout << name 
				<< " signed "
				<< nameForm
				<< std::endl;
	}
	else{
		std::cout << name
				<< " couldn't sign "
				<< nameForm
				<< " because "
				<< reason
				<<std::endl;
	}
}

void	Bureaucrat::executeForm(const std::string& nameForm,
						const std::string& reason) const{
	if (!reason.compare("NON")){
		std::cout << name 
				<< " execute "
				<< nameForm
				<< std::endl;
	}
	else{
		std::cout << name
				<< " couldn't execute "
				<< nameForm
				<< " because "
				<< reason
				<<std::endl;
	}
}