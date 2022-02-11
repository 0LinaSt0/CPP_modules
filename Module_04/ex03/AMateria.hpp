/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:21:59 by marvin            #+#    #+#             */
/*   Updated: 2022/02/11 14:21:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "Character.hpp"

class AMateria{
private:

protected:
	std::string	type;
public:
	AMateria( void );
	AMateria( std::string const& type );
	AMateria( AMateria const& other );
	virtual ~AMateria( void );
	// [...]
	std::string const& getType( void ) const; //Returns the materia type
	virtual AMateria* clone( void ) const = 0;
	virtual void use( ICharacter& target );
} ;

#endif
