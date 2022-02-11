/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:11:47 by marvin            #+#    #+#             */
/*   Updated: 2022/02/11 14:11:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class ICharacter{
private:

public:
	ICharacter( void );
	ICharacter( std::string const& type );
	ICharacter( ICharacter const& other );
	virtual ~ICharacter( void );


	virtual std::string const& getName( void ) const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
} ;


class Character{
private:

public:
	Character( void );
	Character( std::string const& type );
	Character( ICharacter const& other );
	virtual ~Character( void );


	virtual std::string const& getName( void ) const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
} ;
#endif
