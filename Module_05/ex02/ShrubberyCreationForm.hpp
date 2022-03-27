/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:02:05 by msalena           #+#    #+#             */
/*   Updated: 2022/03/27 19:50:04 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHR_CRE_FORM_HPP
#define SHR_CRE_FORM_HPP

#include <fstream>
#include <sstream>
#include "Form.hpp"

class	ShrubberyCreationForm : public Form{
private:
	const std::string	target;
	static std::string*	tree; //HOW_FREE_THAT???
public:
	
	ShrubberyCreationForm ( void );
	ShrubberyCreationForm ( const std::string& target );
	// ShrubberyCreationForm ( const ShrubberyCreationForm& other ); // HOW_TO_DO_THE_COPY_OF_targetFile
	~ShrubberyCreationForm ( void );
	
	const std::string	getTarget() const;

	void	execute( Bureaucrat const& executor ) const;
	int		openTargetFile( void ) const;

	static std::string*	createShrubberyArray( void );
	static void			deleteTreeMemory( void );
} ;

//         __ _.--..--._ _
//      .-' _/   _/\_   \_'-.
//     |__ /   _/\__/\_   \__|
//        |___/\_\__/  \___|
//               \__/
//               \__/
//                \__/
//                 \__/
//              ____\__/___
//        . - '             ' -.
//       /                      \
//~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~


#endif