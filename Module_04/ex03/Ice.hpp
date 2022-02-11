/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:19:01 by marvin            #+#    #+#             */
/*   Updated: 2022/02/11 14:19:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class	Ice : virtual public AMateria{
private:
	std::string	type;
protected:

public:
	Ice( void );
	Ice( std::string const& type );
	Ice( AMateria const& other );
	~Ice( void );

	std::string const& getType( void ) const;
	AMateria* clone( void ) const;
	void use( ICharacter& target );
} ;

#endif

