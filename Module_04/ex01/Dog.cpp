/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:33:29 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 14:11:43 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal (), type ("Dog"){
	this->DogBrain = new Brain;
	std::cout << "Constructor: default for "
			<< this->type
			<< " " << "\U0001F429"
			<< std::endl;
}

Dog::Dog(const std::string& type, const std::string& a_type)
						: Animal (a_type), type (type){
	this->DogBrain = new Brain;
	std::cout << "Constructor: value assignment for "
		<< this->type
		<< " " << "\U0001F429"
		<< std::endl;
}

Dog::Dog(const Dog& other) : Animal (other){
	Dog::operator=(other);
	std::cout << "Constructor: copy for "
			<< this->type
			<< " " << "\U0001F429"
			<< std::endl;
}

Dog::~Dog(void){
	delete this->DogBrain;
	std::cout << "Destructor: "
			<< " " << "\U0001F429" << " "
			<< this->type
			<< " done here"
			<< std::endl;
}

Dog&	Dog::operator=(const Dog& other){
	Animal::operator=(other);
	this->DogBrain = other.DogBrain;

	return *this;
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

void	Dog::takeIdeas(void) const{
	std::cout << "-->I'm "
			<< this->type
			<< " and this is my ideas"
			<< std::endl;
	for (int i=0; i < 100; i++){
		std::cout << "	"
				<< (DogBrain->getIdeas())[i]
				<< " ";
	}
	// std::cout << (CatBrain->getIdeas())[0];
	std::cout << std::endl << std::endl;
}
