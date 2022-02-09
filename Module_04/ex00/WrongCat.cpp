/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:26:00 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 13:02:31 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal (), type ("WrongCat"){
	std::cout << "Constructor: default for "
			<< this->type
			<< " " << "\U0001F640"
			<< std::endl;
}

WrongCat::WrongCat(const std::string& type, const std::string& a_type)
						: WrongAnimal (a_type), type (type){
	std::cout << "Constructor: value assignment for "
		<< this->type
		<< " " << "\U0001F640"
		<< std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal (other){
	WrongAnimal::operator=(other);
	std::cout << "Constructor: copy for "
			<< this->type
			<< " " << "\U0001F640"
			<< std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "Destructor: "
			<< " " << "\U0001F640" << " "
			<< this->type
			<< " done here"
			<< std::endl;
}

void	WrongCat::setType(const std::string& type){
	this->type = type;
}

std::string	WrongCat::getType(void) const{
	return type;
}

void	WrongCat::makeSound(void) const{
	std::cout << std::endl << "	  ------------------" << std::endl
			<< "	| woeM - woeM - woeM |"
			<< std::endl << "	  ------------------" << std::endl
			<< "	/" << std::endl
			<< "\U0001F640" << " " << this->type
			<< std::endl;
}
