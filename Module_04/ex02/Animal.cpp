/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:00:19 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 12:18:59 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void){
	this->type = "Animal";
	std::cout << "Constructor: default for "
			<< this->type
			<< " " << "\U0001F333"
			<< std::endl;
}

Animal::Animal(const std::string& type){
	this->type = type;
	std::cout << "Constructor: value assignment for "
			<< this->type
			<< " " << "\U0001F333"
			<< std::endl;
}

Animal::Animal(const Animal& other){
	Animal::operator=(other);
	std::cout << "Constructor: copy for "
			<< this->type
			<< " " << "\U0001F333"
			<< std::endl;
}

Animal::~Animal(void){
	std::cout << "Destructor: "
			<< " " << "\U0001F333" << " "
			<< this->type
			<< " done here"
			<< std::endl;
}

Animal&	Animal::operator=(const Animal& other){
	this->type = other.type;
	return *this;
}
