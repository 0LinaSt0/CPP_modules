/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:54:02 by msalena           #+#    #+#             */
/*   Updated: 2022/03/28 14:44:47 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name ("default"), gradeSign (1),
					gradeExecute (1){
	indicSign = 0;
	std::cout << "Constructor: default for Form" 
			<< std::endl;
}

Form::Form(const std::string name, const int gradeSign,
			const int gradeExecute) : name (name), 
			gradeSign (gradeSign), gradeExecute (gradeExecute){
	indicSign = 0;
	if (gradeSign < 1)
		throw Bureaucrat::GradeTooHighException(name);
	if (gradeSign > 150)
		throw Bureaucrat::GradeTooLowException(name);
	std::cout << "Constructor: value assignment for Form" 
			<< std::endl;
}

Form::Form(const Form& other) : name (other.getName()), 
			gradeSign (other.getGradeSign()), 
			gradeExecute (other.getGradeExecute()){
	indicSign = other.getIndicSign();
	std::cout << "Constructor: copy for Form"
			<< std::endl;
}

Form::~Form(void){
	std::cout << "Destructor: Form done here" 
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
		throw Bureaucrat::DefaultException(name);
	}
	std::cout << "--->" 
				<< "\U00002705" << " ";
	bur.signForm(name, "NON");
	indicSign = 1;
}

void	Form::beExecute(const Bureaucrat& bur) const {
	if (indicSign){
		if (bur.getGrade() > gradeExecute){
			std::cout << "--->" 
					<< "\U0000274C" << " ";
			if (bur.getGrade() > gradeExecute)
				bur.executeForm(name, "low grade");
			throw Bureaucrat::DefaultException(name);
		}
		std::cout << "--->" 
					<< "\U00002705" << " ";
		bur.executeForm(name, "NON");	
	} else {
		throw Bureaucrat::FormDontSignedException(name);
	}
}