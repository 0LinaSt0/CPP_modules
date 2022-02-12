/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:01:36 by msalena           #+#    #+#             */
/*   Updated: 2022/02/12 18:32:45 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ICE"){
	std::cout << "\033[32m"
			<< "Constructor:"
			<< "\033[0m"
			<< " default for "
			<<this->type
			<< std::endl;
}

Ice::Ice(std::string const& type) : AMateria(type){
	std::cout << "\033[32m"
			<< "Constructor:"
			<< "\033[0m"
			<< " value assignment for "
			<< this->type
			<< std::endl;
}

Ice::Ice(AMateria const& other){
	AMateria::operator=(other);
	std::cout << "\033[32m"
			<< "Constructor:"
			<< "\033[0m"
			<< " copy for "
			<< this->type
			<< std::endl;
}

Ice::~Ice(void){
	std::cout << "\033[31m"
			<< "Destructor: "
			<< "\033[0m"
			<< this->type
			<< " done here"
			<< std::endl;
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
