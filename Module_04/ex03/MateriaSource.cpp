/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:19:00 by marvin            #+#    #+#             */
/*   Updated: 2022/02/11 15:19:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
				: name ("IMateria") {
	std::cout << "Constructor: default for "
			<<this->name
			<< std::endl;
}

IMateriaSource::IMateriaSource(std::string const& name)
					: name (name){
	std::cout << "Constructor: value assignment for "
		<< this->name
		<< std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const& other){
	IMateriaSource::operator=(other);
	std::cout << "Constructor: copy for "
		<< this->name
		<< std::endl;
}

IMateriaSource::~IMateriaSource(void){
	std::cout << "Destructor: "
			<< this->name
			<< " done here"
			<< std::endl;
}

IMateriaSource&	IMateriaSource::operator=(IMateriaSource const& other){
	this->name = other.name;
	for (int i=0; i < 4; i++){
		this->type[i] = other.type[i];
		this->fullFl[i] = other.fullFl[i];
	}
	return *this;
}


//~~~~~~~ Implemented MateriaSource ~~~~~~~

MateriaSource::MateriaSource(void)
				: name ("Materia") {
	setFlArr();
	std::cout << "Constructor: default for "
			<<this->name
			<< std::endl;
}

MateriaSource::MateriaSource(std::string const& name)
					: name (name){
	setFlArr();
	std::cout << "Constructor: value assignment for "
		<< this->name
		<< std::endl;
}

MateriaSource::MateriaSource(IMateriaSource const& other){
	IMateriaSource::operator=(other);
	std::cout << "Constructor: copy for "
		<< this->name
		<< std::endl;
}

MateriaSource::~MateriaSource(void){
	std::cout << "Destructor: "
			<< this->name
			<< " done here"
			<< std::endl;
}


void MateriaSource::learnMateria( AMateria* other){
	size_t	iter = 0;

	while (iter < 4 && !(this->fullFl[iter]))
		iter++;
	if (iter == 4){
		std::cout << "Wait, wait, wait... I could know just 4 sources"
				<< std::endl << std::endl;
		return ;
	}
	this->type[iter] = other;
	fullFl[iter] = 1;
}

AMateria* MateriaSource::createMateria( std::string const& param){
	int	compare_fl = 0;
	int	iter = 0;

	for ((fullFl[iter] && iter < 4); iter++){
		if (((this->type[iter])->getType()) == param){
			compare_fl = 1;
			break ;
		}
	}
	if (!compare_fl){
		std::cout << "I don't have this type of materia"
				<<std::endl << std::endl;
		return ;
	}
	return this->type[iter];
}

void	MateriaSource::setFlArr( void ){
	for(int	i=0; i < 4; i++){
		this->fullFl[i] = 0;
	}
}
