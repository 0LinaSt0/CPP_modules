/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:54:02 by msalena           #+#    #+#             */
/*   Updated: 2022/03/26 21:01:45 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name ("default"), gradeSign (1),
					gradeExecute (1){
	indicSign = 0;
	std::cout << "Constructor: default for Bureaucrat" 
			<< std::endl;
}

Form::Form(const std::string name, const int gradeExecute,
			const int gradeSign) : name (name), 
			gradeSign (gradeSign), gradeExecute (gradeExecute){
	indicSign = 0;
	if (gradeSign < 1)
		throw Bureaucrat::GradeTooHighException(HIGHT);
	if (gradeSign > 150)
		throw Bureaucrat::GradeTooLowException(LOW);
	std::cout << "Constructor: value assignment for " 
			<< name 
			<< std::endl;
}

Form::Form(const Form& other) : name (other.getName()), 
			gradeSign (other.getGradeSign()), 
			gradeExecute (other.getGradeExecute()){
	indicSign = other.getIndicSign();
	std::cout << "Constructor: copy for " 
			<< name 
			<< std::endl;
}

Form::~Form(void){
	std::cout << "Destructor: "
			<< name << " done here" 
			<< std::endl;
}

std::string	Form::getName(void) const{
	return (name);
}

bool	Form::getIndicSign(void) const{
	return (indicSign);
}

int	Form::getGradeSign(void) const{
	return (gradeSign);
}

int	Form::getGradeExecute(void) const{
	return (gradeExecute);
}

void	Form::beSigned(const Bureaucrat& bur){
	if (indicSign){
		std::cout << "--->" 
				<< "\U0000274C" << " "
				<< name
				<< " already signed"
				<< std::endl;
		return ;
	}
	if (bur.getGrade() > gradeSign){
		std::cout << "--->" 
				<< "\U0000274C" << " ";
		bur.signForm(name, "low grade");
		throw Bureaucrat::GradeTooLowException(LOW);
	}
	// exit (0);
	std::cout << "--->" 
				<< "\U00002705" << " ";
	bur.signForm(name, "NON");
	indicSign = 1;
}