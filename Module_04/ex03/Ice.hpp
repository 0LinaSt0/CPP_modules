/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:19:01 by marvin            #+#    #+#             */
/*   Updated: 2022/02/12 18:07:43 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class	Ice : virtual public AMateria{
private:

protected:

public:
	Ice( void );
	Ice( std::string const& type );
	Ice( AMateria const& other );
	~Ice( void );

	AMateria* clone( void ) const; 
	void use( ICharacter& target );
} ;

#endif

