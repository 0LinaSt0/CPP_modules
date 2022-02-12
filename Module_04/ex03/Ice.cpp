/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:01:36 by msalena           #+#    #+#             */
/*   Updated: 2022/02/12 14:33:26 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : type("ice"){
	std::cout << "Constructor: default for "
		<<this->type
		<< std::endl;
}

Ice::Ice(std::string const& type) : type(type){
	std::cout << "Constructor: value assignment for "
		<< this->type
		<< std::endl;
}

Ice::Ice(AMateria const& other){
	AMateria::operator=(other);
	std::cout << "Constructor: copy for "
		<< this->type
		<< std::endl;
}

Ice::~Ice(void){
	std::cout << "Destructor: "
		<< this->type
		<< " done here"
		<< std::endl;
}

std::string const& Ice::getSpecialType(void) const{
	return type;
}

AMateria* Ice::clone( void ) const{
	AMateria	*_new = new Ice();

	*_new = *this;
	return _new;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at "
			<< target.getName()
			<< " *"
			<< std::endl << std::endl;
}
