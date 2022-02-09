/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:00:19 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 13:03:39 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	this->type = "WrongAnimal";
	std::cout << "Constructor: default for "
			<< this->type
			<< " " << "\U0001F334"
			<< std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type){
	this->type = type;
	std::cout << "Constructor: value assignment for "
			<< this->type
			<< " " << "\U0001F334"
			<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	WrongAnimal::operator=(other);
	std::cout << "Constructor: copy for "
			<< this->type
			<< " " << "\U0001F334"
			<< std::endl;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Destructor: "
			<< " " << "\U0001F334" << " "
			<< this->type
			<< " done here"
			<< std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other){
	this->type = other.type;
	return *this;
}

std::string	WrongAnimal::getType(void) const{
	return type;
}

void	WrongAnimal::setType(const std::string& type){
	this->type = type;
}

void	WrongAnimal::makeSound(void) const{
	std::cout << std::endl << "	  ---------------------------------" << std::endl
			<< "	 | I'm wrong cat with wrong sounds |"
			<< std::endl << "	  ---------------------------------" << std::endl
			<< "	/" << std::endl
			<< "\U0001F334" << " " << this->type
			<< std::endl;
}
