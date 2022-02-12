/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:46:25 by msalena           #+#    #+#             */
/*   Updated: 2022/02/12 14:32:53 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : type("cure"){
	std::cout << "Constructor: default for "
		<<this->type
		<< std::endl;
}

Cure::Cure(std::string const& type) : type(type){
	std::cout << "Constructor: value assignment for "
		<< this->type
		<< std::endl;
}

Cure::Cure(AMateria const& other){
	AMateria::operator=(other);
	std::cout << "Constructor: copy for "
		<< this->type
		<< std::endl;
}

Cure::~Cure(void){
	std::cout << "Destructor: "
		<< this->type
		<< " done here"
		<< std::endl;
}

// std::string const& Cure::getType(void) const{
// 	return type;
// }

std::string const& Cure::getSpecialType( void ) const{
	return type;
}

AMateria* Cure::clone( void ) const{
	AMateria	*_new = new Cure();

	*_new = *this;
	return _new;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals "
			<< target.getName()
			<< "’s wounds *"
			<< std::endl << std::endl;
}
