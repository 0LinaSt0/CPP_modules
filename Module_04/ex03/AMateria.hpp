/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:21:59 by marvin            #+#    #+#             */
/*   Updated: 2022/02/12 14:31:57 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "Character.hpp"

class ICharacter;

class AMateria{
private:

protected:
	std::string	type;
public:
	AMateria( void );
	AMateria( std::string const& type );
	AMateria( AMateria const& other );
	virtual ~AMateria( void );

	AMateria&	operator=( AMateria const& other );

	std::string const& getType( void ) const; //Returns the materia type
	virtual std::string const& getSpecialType( void ) const = 0;
	virtual AMateria* clone( void ) const = 0;
	virtual void use( ICharacter& target );
} ;

#endif
