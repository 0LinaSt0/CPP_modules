/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:07:28 by msalena           #+#    #+#             */
/*   Updated: 2022/03/28 16:53:01 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern{
private:
public:
	Intern ( void );
	Intern ( const std::string& nameForm, const std::string& targetForm );
	Intern ( const Intern& other );
	~Intern ( void );

	Form*	makeForm ( const std::string& nameForm, const std::string& targetForm );
} ;

#endif