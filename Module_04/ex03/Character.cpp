/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:04:19 by msalena           #+#    #+#             */
/*   Updated: 2022/02/12 14:57:33 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::ICharacter(void) : name("default_character"){
	std::cout << "Constructor: default for "
	<<this->name
	<< std::endl;
}

ICharacter::ICharacter(std::string const& name) : name(name){
	std::cout << "Constructor: value assignment for "
	<< this->name
	<< std::endl;
}

ICharacter::ICharacter(ICharacter const& other){
	ICharacter::operator=(other);
	std::cout << "Constructor: copy for "
		<< this->name
		<< std::endl;
}

ICharacter::~ICharacter(void){
	std::cout << "Destructor: "
			<< this->name
			<< " done here"
			<< std::endl;
}

ICharacter&	ICharacter::operator=(ICharacter const& other){
	for (int i=0; i<4; i++){
		slots[i] = other.slots[i];
	}
	this->name = other.name;
	return *this;
}

//~~~~~~~ ImplementedCharacter ~~~~~~~

Character::Character(void) : name("default_name"){
	setSlots();
	std::cout << "Constructor: default for "
	<<this->name
	<< std::endl;
}

Character::Character(std::string const& name) : name(name){
	setSlots();
	std::cout << "Constructor: value assignment for "
	<< this->name
	<< std::endl;
}

Character::Character(ICharacter const& other){
	ICharacter::operator=(other);
	std::cout << "Constructor: copy for "
		<< this->name
		<< std::endl;
}

Character::~Character(void){
	std::cout << "Destructor: "
			<< this->name
			<< " done here"
			<< std::endl;
}

void	Character::setSlots(void){
	for (int i=0; i<4; i++)
		slots[i] = 0;
}

std::string const& Character::getName( void ) const{
	return name;
}


void Character::equip(AMateria* m){
	size_t	iter = 0;

	while(slots[iter] && iter<4)
		iter++;
	if (iter == 4){
		std::cout << ":( Oh know... The "
				<< this->name
				<< "'s bag is full. Please, unequip something"
				<< std::endl << std::endl;
	}
	std::cout << iter << std::endl;
	slots[iter] = m;
	std::cout << "--> Bag of "
		<< this->name
		<< " take plus one new "
		<< slots[iter]->getSpecialType()
		<< " now"
		<< std::endl << std::endl;
}

void Character::unequip(int idx){
	slots[idx] = NULL;
	std::cout << "--> The slot with "
			<< idx
			<< " index unequiped. Now this place is free for new matria"
			<< std::endl << std::endl;
}

void Character::use(int idx, ICharacter& target){
	size_t	slots_iter = 0;

	if (idx > 3 || !(slots[idx])){
		while (slots[slots_iter])
			slots_iter++;
		std::cout << ":( There is not the index "
				<< idx
				<< " . Please, choose 0 - "
				<< slots_iter-1
				<< std::endl << std::endl;
		return ;
	}
	slots[idx]->use(target);
}
