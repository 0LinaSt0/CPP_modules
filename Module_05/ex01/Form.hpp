/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:15:58 by msalena           #+#    #+#             */
/*   Updated: 2022/03/26 18:08:25 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class Form{
private:
	const std::string	name;
	bool				indicSign;
	const int			gradeSign;
	const int			gradeExecute;
public:
	Form ( void );
	Form ( const std::string name, const int gradeExexute,
							const int gradeSign );
	Form ( const Form& other );
	~Form ( void );

	std::string	getName ( void ) const;
	bool		getIndicSign ( void ) const;
	int			getGradeSign ( void ) const;
	int			getGradeExecute ( void ) const;
	
	void		beSigned ( const Bureaucrat& bur );
} ;

#endif
