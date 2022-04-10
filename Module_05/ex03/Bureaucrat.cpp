/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:39:05 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 17:08:22 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string name){
	std::cout << "\033[31m" 
			<< "!"
			<< name
			<< " gave exeption!"
			<< "\033[0m"
			<< " ->THE HIGHTEST GRADE IS 1" 
			<< std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string name){
	std::cout << "\033[31m" 
			<< "!"
			<< name
			<< " gave exeption!"
			<< "\033[0m"
			<< " -> THE LOWEST GRADE IS 150" 
			<< std::endl;
}

Bureaucrat::FormDontSignedException::FormDontSignedException(const std::string name){
	std::cout << "\033[31m" 
			<< "!"
			<< name
			<< " gave exeption!"
			<< "\033[0m"
			<< " -> FORM DIDN'T SIGNED" 
			<< std::endl;
}

Bureaucrat::DefaultException::DefaultException(const std::string name){
	std::cout << "\033[31m" 
			<< "!"
			<< name
			<< " gave exeption!"
			<< "\033[0m"
			<< std::endl;
}

Bureaucrat::Bureaucrat(void) : name ("default"){
	std::cout << "Constructor: default for Bureaucrat" << std::endl;
	grade = 1;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) 
										: name (name){	
	if (grade < 1)
		throw GradeTooHighException(name);
	if (grade > 150)
		throw GradeTooLowException(name);
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
		throw GradeTooHighException(name);
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
		throw GradeTooLowException(name);
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

void	Bureaucrat::executeForm(Form const & form) const{
	if (grade > form.getGradeExecute()){
		std::cout << name
				<< " couldn't execute "
				<< form.getName()
				<< std::endl;
	} else {
		std::cout << name 
				<< " execute "
				<< form.getName()
				<< std::endl;
	}
}