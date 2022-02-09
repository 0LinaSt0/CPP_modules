/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:31:24 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 12:33:24 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal{
private:

protected:
	std::string	type;

	void	setType( const std::string& type);
public:
	Dog( void );
	Dog( const std::string& type, const std::string& a_type );
	Dog( const Dog& other );
	~Dog( void );

	std::string	getType( void ) const;
	void	makeSound( void ) const;
} ;

#endif
