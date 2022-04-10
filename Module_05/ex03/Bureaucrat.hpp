/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:58:27 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 17:07:33 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class	Form;

class	Bureaucrat{
private:
	const std::string	name;
	int					grade;
public:
	class		GradeTooHighException;
	class		GradeTooLowException;
	class		FormDontSignedException;
	class		DefaultException;
	std::string str;
	
	Bureaucrat ( void );
	Bureaucrat ( const std::string& name, int grade );
	Bureaucrat ( const Bureaucrat& other );
	~Bureaucrat ( void );

	Bureaucrat& operator= ( const Bureaucrat& other );

	std::string	getName ( void ) const;
	int			getGrade ( void ) const;

	void		increment ( void );
	void		decrement ( void );
	void		signForm ( const std::string& nameForm,
								const std::string& reason ) const;
	void		executeForm ( Form const & form ) const;
} ;

class	Bureaucrat::GradeTooHighException : public std::exception{
public:
	GradeTooHighException ( const std::string name );
} ;

class	Bureaucrat::GradeTooLowException : public std::exception{
public:
	GradeTooLowException ( const std::string name );
} ;

class	Bureaucrat::FormDontSignedException : public std::exception{
public:
	FormDontSignedException ( const std::string name );
} ;

class	Bureaucrat::DefaultException : public std::exception{
public:
	DefaultException ( const std::string name );
} ;

#endif