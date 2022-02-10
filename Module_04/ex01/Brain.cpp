/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:32:19 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 13:57:32 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	setIdeas("IDEA");
	std::cout << "Constructor: default for Brain "
			<< "\U0001F9E0"
			<< std::endl;
}

Brain::Brain(const std::string& idea){
	setIdeas(idea);
	std::cout << "Constructor: value assignment for Brain "
		<< "\U0001F9E0"
		<< std::endl;
}

Brain::Brain(const Brain& other){
	Brain::operator=(other);
	std::cout << "Constructor: copy for Brain "
		<< "\U0001F9E0"
		<< std::endl;
}

Brain::~Brain(void){
	std::cout << "Destructor: "
			<< "\U0001F9E0"
			<< " Brain"
			<< " done here"
			<< std::endl;
}

Brain&	Brain::operator=(const Brain& other){
	for (int i = 0; i < 100; i++){
		this->ideas[i] = other.ideas[i];
	}
	return *this;
}

void	Brain::setIdeas( const std::string& idea ){
	for (int i = 0; i < 100; i++){
		this->ideas[i] = idea;
	}
}

std::string*	Brain::getIdeas(void){
	return this->ideas;
}
