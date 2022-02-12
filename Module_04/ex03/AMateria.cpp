/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:06:40 by marvin            #+#    #+#             */
/*   Updated: 2022/02/12 19:01:52 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria* AMateria::needDelet = 0;

AMateria::AMateria(void) : type("default_materia"){
	std::cout << "Constructor: default"
			<< std::endl;
}

AMateria::AMateria(std::string const& type) : type(type){
	std::cout << "Constructor: value assignment for default"
			<< std::endl;
}

AMateria::AMateria(AMateria const& other){
	AMateria::operator=(other);
	std::cout << "Constructor: copy for default"
			<< std::endl;
}

AMateria::~AMateria(void){
	std::cout << "Destructor: default_materia done here"
			<< std::endl;
}

AMateria&	AMateria::operator=(AMateria const& other){
	type = other.type;
	return *this;
}

std::string const& AMateria::getType(void) const{
	return type;
}

void AMateria::use(ICharacter& target){
	std::cout << "I'm basic materia for"
			<< target.getName()
			<< std::endl << std::endl;
}

void	AMateria::safeElem(AMateria* input){
	AMateria::needDelet = input;
}
