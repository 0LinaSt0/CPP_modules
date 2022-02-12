/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:19:00 by marvin            #+#    #+#             */
/*   Updated: 2022/02/12 18:43:23 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//~~~~~~~ Implemented MateriaSource ~~~~~~~

MateriaSource::MateriaSource(void)
				: name ("materia") {
	setType();
	std::cout << "\033[32m"
			<< "Constructor:"
			<< "\033[0m"
			<<" default for "
			<<this->name
			<< std::endl;
}

MateriaSource::MateriaSource(std::string const& name)
					: name (name){
	setType();
	std::cout << "\033[32m"
		<< "Constructor:"
		<< "\033[0m"
		<< " value assignment for "
		<< this->name
		<< std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& other){
	name = other.name;
	for (int i=0;i<4;i++){
		type[i] = other.type[i];
	}
	std::cout << "\033[32m"
		<< "Constructor:"
		<< "\033[0m"
		<< " copy for "
		<< this->name
		<< std::endl;
}

MateriaSource::~MateriaSource(void){
	for (int i=0; i<4; i++){
		if (type[i])
			delete type[i];
	}
	std::cout << "\033[31m"
			<< "Destructor: "
			<< "\033[0m"
			<< this->name
			<< " done here"
			<< std::endl;
}


void MateriaSource::learnMateria(AMateria* other){
	size_t	iter = 0;

	while (this->type[iter] && iter < 4)
		iter++;
	if (iter == 4){
		std::cout << ":( Wait, wait, wait... I could know just 4 sources"
				<< std::endl << std::endl;
		delete other;
		return ;
	}
	this->type[iter] = other;
	std::cout << ":) I know new materia "
			<< type[iter]->getType()
			<< " now"
			<< std::endl << std::endl;
}

AMateria* MateriaSource::createMateria( std::string const& param){
	int	compare_fl = 0;
	int	iter = 0;

	while (type[iter] && iter < 4){
		if (((this->type[iter])->getType()) == param){
			compare_fl = 1;
			break ;
		}
		iter++;
	}
	if (!compare_fl){
		std::cout << ":( I don't have this type of materia"
				<<std::endl << std::endl;
		return nullptr;
	}
		std::cout << ":) I created new materia "
			<< type[iter]->getType()
			<< " now"
			<< std::endl << std::endl;
	return type[iter]->clone();
}

void	MateriaSource::setType( void ){
	for(int	i=0; i < 4; i++){
		this->type[i] = 0;
	}
}
