/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:33:29 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 12:39:49 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal (), type ("Dog"){
	std::cout << "Constructor: default for "
			<< this->type
			<< " " << "\U0001F429"
			<< std::endl;
}

Dog::Dog(const std::string& type, const std::string& a_type)
						: Animal (a_type), type (type){
	std::cout << "Constructor: value assignment for "
		<< this->type
		<< " " << "\U0001F429"
		<< std::endl;
}

Dog::Dog(const Dog& other) : Animal (other){
	Animal::operator=(other);
	std::cout << "Constructor: copy for "
			<< this->type
			<< " " << "\U0001F429"
			<< std::endl;
}

Dog::~Dog(void){
	std::cout << "Destructor: "
			<< " " << "\U0001F429" << " "
			<< this->type
			<< " done here"
			<< std::endl;
}

void	Dog::setType(const std::string& type){
	this->type = type;
}

std::string	Dog::getType(void) const{
	return type;
}

void	Dog::makeSound(void) const{
	std::cout << std::endl << "	  ------------------" << std::endl
			<< "	| Woof - woof - woof |"
			<< std::endl << "	  ------------------" << std::endl
			<< "	/" << std::endl
			<< "\U0001F429" << " " << this->type
			<< std::endl;
}
