/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:04:19 by msalena           #+#    #+#             */
/*   Updated: 2022/02/12 18:58:49 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//~~~~~~~ ImplementedCharacter ~~~~~~~

Character::Character(void) : name("default_name"){
	setSlots();
	std::cout << "\033[32m"
			<< "Constructor:"
			<< "\033[0m"
			<< " default for "
			<<this->name
			<< std::endl;
}

Character::Character(std::string const& name) : name(name){
	setSlots();
	std::cout << "\033[32m"
			<< "Constructor:"
			<< "\033[0m"
			<< " value assignment for "
			<< this->name
			<< std::endl;
}

Character::Character(Character const& other){
	name = other.name;
	for (int i=0; i<4; i++){
		slots[i] = other.slots[i];
	}
	std::cout << "\033[32m"
			<< "Constructor:"
			<< "\033[0m"
			<< " copy for "
			<< this->name
			<< std::endl;
}

Character::~Character(void){
	for (int i=0; i<4; i++){
		if (slots[i])
			delete slots[i];
	}
	std::cout << "\033[31m"
			<< "Destructor: "
			<< "\033[0m"
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
	slots[iter] = m;
	std::cout << "--> Bag of "
		<< this->name
		<< " take plus one new "
		<< slots[iter]->getType()
		<< " now"
		<< std::endl << std::endl;
}

void Character::unequip(int idx){
	AMateria::safeElem(slots[idx]);
	slots[idx] = nullptr;
	std::cout << "--> The slot with "
			<< idx
			<< " index unequiped. Now this place is free for new matria"
			<< std::endl << std::endl;
}

void Character::use(int idx, ICharacter& target){
	size_t	slots_iter = 0;

	if (idx > 3 || !(slots[idx])){
		std::cout << ":( There is not the index "
				<< idx
				<< " . Please, choose one of this: ";
				while (slots_iter<4){
					if (slots[slots_iter]){
						std::cout << slots_iter
								<< " ";
					}
					slots_iter++;
				}
				std::cout << std::endl << std::endl;
		return ;
	}
	slots[idx]->use(target);
}
