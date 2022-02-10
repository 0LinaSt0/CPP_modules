/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:31:24 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 14:07:18 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal{
private:
	Brain*	DogBrain;
protected:
	std::string	type;

	void	setType( const std::string& type);
public:
	Dog( void );
	Dog( const std::string& type, const std::string& a_type );
	Dog( const Dog& other );
	~Dog( void );

	Dog&	operator=( const Dog& other );

	std::string	getType( void ) const;
	void	makeSound( void ) const;
	void	takeIdeas( void ) const;
} ;

#endif
