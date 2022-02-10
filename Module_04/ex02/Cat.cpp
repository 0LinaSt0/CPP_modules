/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:26:00 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 14:12:06 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal (), type ("Cat"){
	this->CatBrain = new Brain;
	std::cout << "Constructor: default for "
			<< this->type
			<< " " << "\U0001F408"
			<< std::endl;
}

Cat::Cat(const std::string& type, const std::string& a_type)
						: Animal (a_type), type (type){
	this->CatBrain = new Brain;
	std::cout << "Constructor: value assignment for "
		<< this->type
		<< " " << "\U0001F408"
		<< std::endl;
}

Cat::Cat(const Cat& other) : Animal (other){
	Cat::operator=(other);
	std::cout << "Constructor: copy for "
			<< this->type
			<< " " << "\U0001F408"
			<< std::endl;
}

Cat::~Cat(void){
	delete this->CatBrain;
	std::cout << "Destructor: "
			<< " " << "\U0001F408" << " "
			<< this->type
			<< " done here"
			<< std::endl;
}

Cat&	Cat::operator=(const Cat& other){
	Animal::operator=(other);
	this->CatBrain = other.CatBrain;

	return *this;
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

void	Cat::takeIdeas(void) const{
	std::cout << "-->I'm "
			<< this->type
			<< " and this is my ideas"
			<< std::endl;
	for (int i=0; i < 100; i++){
		std::cout << "	"
				<< (CatBrain->getIdeas())[i]
				<< " ";
	}
	// std::cout << (CatBrain->getIdeas())[0];
	std::cout << std::endl << std::endl;
}
