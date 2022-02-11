/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:47:43 by marvin            #+#    #+#             */
/*   Updated: 2022/02/11 14:47:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define	MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource{
private:
	std::string	name;
	size_t		fullFl[4];
protected:
	AMateria const*	type[4];
public:
	IMateriaSource( void );
	IMateriaSource( std::string const& name );
	IMateriaSource( IMateriaSource const& other );
	virtual ~IMateriaSource( void );

	IMateriaSource&	operator=( IMateriaSource const& other );

	virtual void learnMateria( AMateria* other ) = 0;
	virtual AMateria* createMateria( std::string const & param ) = 0;
};

class	MateriaSource : public IMateriaSource{
private:
	std::string	name;
	size_t		fullFl[4];

	void	setFlArr( void );
protected:
	AMateria const*	type[4];
public:
	MateriaSource( void );
	MateriaSource( std::string const& type );
	MateriaSource( IMateriaSource const& other );
	~MateriaSource( void );

	void learnMateria( AMateria* other);
	AMateria* createMateria( const std::string& param );
} ;

#endif
