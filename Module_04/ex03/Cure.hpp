/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:10:40 by marvin            #+#    #+#             */
/*   Updated: 2022/02/12 14:35:21 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class	Cure : virtual public AMateria{
private:
	std::string	type;
protected:

public:
	Cure( void );
	Cure( std::string const& type );
	Cure( AMateria const& other );
	~Cure( void );

	AMateria* clone( void ) const; // should be uncorrect
	std::string const& getSpecialType( void ) const;
	void use( ICharacter& target );
} ;

#endif
