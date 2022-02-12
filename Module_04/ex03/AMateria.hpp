/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:21:59 by marvin            #+#    #+#             */
/*   Updated: 2022/02/12 18:59:05 by msalena          ###   ########.fr       */
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
	static AMateria* needDelet;

	AMateria( void );
	AMateria( std::string const& type );
	AMateria( AMateria const& other );
	virtual ~AMateria( void );

	AMateria&	operator=( AMateria const& other );

	std::string const& getType( void ) const;
	virtual AMateria* clone( void ) const = 0;
	virtual void use( ICharacter& target );
	static void	safeElem( AMateria* input );
} ;

#endif
