/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:15:58 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 17:03:55 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

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
	Form ( const std::string name, const int gradeSign,
						 const int gradeExexute);
	Form ( const Form& other );
	virtual ~Form ( void );

	std::string	getName ( void ) const;
	bool		getIndicSign ( void ) const;
	int			getGradeSign ( void ) const;
	int			getGradeExecute ( void ) const;
	
	void		beSigned ( const Bureaucrat& bur ); 
	void		beExecute ( const Bureaucrat&  bur ) const;
	virtual void	execute(Bureaucrat const & executor) const = 0;
} ;

#endif
