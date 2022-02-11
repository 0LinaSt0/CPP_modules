/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:10:40 by marvin            #+#    #+#             */
/*   Updated: 2022/02/11 15:10:40 by marvin           ###   ########.fr       */
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

	std::string const& getType( void ) const;
	AMateria* clone( void ) const;
	void use( ICharacter& target );
} ;

#endif
