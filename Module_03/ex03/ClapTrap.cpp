/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:52:43 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 10:11:56 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	setAttrib("<without_name>");

	std::cout << "Constructor: default" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name){
	setAttrib(name);
	std::cout << "Constructor: "
			  << "My name is "
			  << this->name
			  << ". I gave birth all guys"
			  << std::endl
			  << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	ClapTrap::operator=(other);
	std::cout << "Constructor: copy for "
			<< this->name
			<< std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor: "
			  << this->name
			  << " done here. See you late"
			  << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string &target){
	if (this->energyPoint == 0){
		std::cout << std::endl
				<< "!Oh no, i cannot doing attack without energy :(!"
				<< std::endl
				<< std::endl;
		return;
	}
	std::cout << "--> " << this->name
			<< "\033[33m" << " attacks " << "\033[0m"
			<< target
			<< ", causing "
			<< this->attackDamage
			<< " points of damage!"
			<< std::endl;
	this->energyPoint--;
	std::cout << "	Ha-ha-ha, i attacked " << target << std::endl;
	printInfo();
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "--> " << this->name
			<< " take "
			<< "\033[31m" << "damage " << "\033[0m"
			<< std::endl;
	attackDamage += amount;
	std::cout << "	I'm feeling my new power " << std::endl;
	printInfo();
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->energyPoint == 0){
		std::cout << std::endl
				<< "!Oh no, i cannot doing repaired without energy :(!"
				<< std::endl << std::endl;
		return;
	}
	std::cout << "--> " << this->name
			<< " is "
			<< "\033[32m" << "repairing " << "\033[0m"
			<< std::endl;
	this->energyPoint--;
	if (this->hitPoint < 10){
		if ((this->hitPoint + amount) > 10){
			this->hitPoint = 10;
		} else {
			this->hitPoint += amount;
		}
		std::cout << "	I'm much better now " << std::endl;
	} else {
		std::cout << "	My healfy is full " << std::endl;
	}
	printInfo();
}

void ClapTrap::setAttrib(const std::string &name){
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

void ClapTrap::printInfo(void){
	std::cout << "		Now, my healf: "
			<< "\033[32m" << this->hitPoint << "\033[0m"
			<< ", my energy: "
			<< "\033[34m" << this->energyPoint << "\033[0m"
			<< ", my damage: "
			<< "\033[31m" << this->attackDamage << "\033[0m"
			<< std::endl << std::endl;
}
