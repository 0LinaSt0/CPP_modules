/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:26:00 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 12:40:03 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal (), type ("Cat"){
	std::cout << "Constructor: default for "
			<< this->type
			<< " " << "\U0001F408"
			<< std::endl;
}

Cat::Cat(const std::string& type, const std::string& a_type)
						: Animal (a_type), type (type){
	std::cout << "Constructor: value assignment for "
		<< this->type
		<< " " << "\U0001F408"
		<< std::endl;
}

Cat::Cat(const Cat& other) : Animal (other){
	Animal::operator=(other);
	std::cout << "Constructor: copy for "
			<< this->type
			<< " " << "\U0001F408"
			<< std::endl;
}

Cat::~Cat(void){
	std::cout << "Destructor: "
			<< " " << "\U0001F408" << " "
			<< this->type
			<< " done here"
			<< std::endl;
}

void	Cat::setType(const std::string& type){
	this->type = type;
}

std::string	Cat::getType(void) const{
	return type;
}

void	Cat::makeSound(void) const{
	std::cout << std::endl << "	  ------------------" << std::endl
			<< "	| Meow - meow - meow |"
			<< std::endl << "	  ------------------" << std::endl
			<< "	/" << std::endl
			<< "\U0001F408" << " " << this->type
			<< std::endl;
}
