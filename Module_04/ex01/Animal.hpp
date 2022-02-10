/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:09:15 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 12:45:33 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal{
private:

protected:
	std::string	type;
	// Brain*	AnimalBrain;

	void		setType( const std::string& type );
public:
	Animal( void );
	Animal( const std::string& type );
	Animal( const Animal& other );
	virtual ~Animal( void );

	Animal&	operator=( const Animal& othrer );

	virtual std::string	getType( void ) const;
	virtual void	makeSound( void ) const;
	virtual void	takeIdeas( void ) const;
} ;

#endif
