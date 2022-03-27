/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:58:27 by msalena           #+#    #+#             */
/*   Updated: 2022/03/27 19:28:34 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

#define HIGHT "THE HIGHTEST GRADE IS 1"
#define LOW "THE LOWEST GRADE IS 150"

class	Form;

class	Bureaucrat{
private:
	const std::string	name;
	int					grade;
public:
	class		GradeTooHighException;
	class		GradeTooLowException;
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
	void		executeForm ( const std::string& nameForm,
						const std::string& reason ) const;
} ;

class	Bureaucrat::GradeTooHighException : public std::exception{
public:
	GradeTooHighException ( const std::string& error );
} ;

class	Bureaucrat::GradeTooLowException : public std::exception{
public:
	GradeTooLowException ( const std::string& error );
} ;

#endif