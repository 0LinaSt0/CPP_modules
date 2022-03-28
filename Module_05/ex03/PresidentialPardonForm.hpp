/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:03:00 by msalena           #+#    #+#             */
/*   Updated: 2022/03/28 13:13:56 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRES_PARD_FORM_HPP
#define PRES_PARD_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:
	const std::string	target;
public:
	PresidentialPardonForm ( void );
	PresidentialPardonForm ( const std::string& target );
	PresidentialPardonForm ( const PresidentialPardonForm& other );
	~PresidentialPardonForm ( void );

	const std::string	getTarget ( void ) const;
	
	void	execute ( Bureaucrat const& executor ) const;
} ;

#endif 