/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:58:27 by msalena           #+#    #+#             */
/*   Updated: 2022/03/20 20:12:03 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
// #include <stdexcept>

class	Bureaucrat{
private:
	std::string			hight;
	std::string			low;
	const std::string	name;
	int					grade;
	
public:
	Bureaucrat ( void );
	Bureaucrat ( const std::string& name, int grade );
	Bureaucrat ( const Bureaucrat& other );
	~Bureaucrat ( void );

	Bureaucrat& operator= ( const Bureaucrat& other );

	std::string	getName ( void ) const;
	int			getGrade ( void ) const;
	void		increment ( void );
	void		decrement ( void );
	class		GradeTooHighException;
	class		GradeTooLowException;
} ;

class	Bureaucrat::GradeTooHighException : public std::exception{
public:
	GradeTooHighException ( std::string& error );
} ;

class	Bureaucrat::GradeTooLowException : public std::exception{
public:
	GradeTooLowException ( std::string& error );
} ;

#endif