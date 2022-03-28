/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:29:05 by msalena           #+#    #+#             */
/*   Updated: 2022/03/28 12:18:04 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROB_REQ_FORM_HPP
#define ROB_REQ_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
private:
	const std::string	target;
	static std::string	noise;
public:
	RobotomyRequestForm ( void );
	RobotomyRequestForm ( const std::string& target );
	RobotomyRequestForm ( const RobotomyRequestForm& other );
	~RobotomyRequestForm ( void );

	const std::string	getTarget ( void ) const;
	
	void	execute ( Bureaucrat const& executor ) const;
} ;

#endif