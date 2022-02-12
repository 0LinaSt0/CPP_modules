/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:46:25 by msalena           #+#    #+#             */
/*   Updated: 2022/02/12 18:32:25 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("CURE"){
	std::cout << "\033[32m"
			<< "Constructor:"
			<< "\033[0m"
			<< " default for "
			<<this->type
			<< std::endl;
}

Cure::Cure(std::string const& type) : AMateria(type){
	std::cout << "\033[32m"
			<< "Constructor:"
			<< "\033[0m"
			<< " value assignment for "
			<< this->type
			<< std::endl;
}

Cure::Cure(AMateria const& other){
	AMateria::operator=(other);
	std::cout << "\033[32m"
			<< "Constructor:"
			<< "\033[0m"
			<< " copy for "
			<< this->type
			<< std::endl;
}

Cure::~Cure(void){
	std::cout << "\033[31m"
			<< "Destructor: "
			<< "\033[0m"
			<< this->type
			<< " done here"
			<< std::endl;
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
