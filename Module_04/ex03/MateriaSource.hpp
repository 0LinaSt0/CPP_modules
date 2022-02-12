/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:47:43 by marvin            #+#    #+#             */
/*   Updated: 2022/02/12 18:36:24 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define	MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class	MateriaSource : public IMateriaSource{
private:
	std::string	name;

	void	setType( void );
protected:
	AMateria*	type[4];
public:
	MateriaSource( void );
	MateriaSource( std::string const& name );
	MateriaSource( MateriaSource const& other );
	~MateriaSource( void );

	void learnMateria( AMateria* other);
	AMateria* createMateria( const std::string& param );
} ;

#endif
