/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:10:07 by msalena           #+#    #+#             */
/*   Updated: 2022/02/06 20:38:49 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap(){
	std::cout << "Constructor: default son" << std::endl;
}

FragTrap::FragTrap( std::string& name, std::string& par_name)
				: ClapTrap(par_name), name (name){
	std::cout << "Constructor: "
		<< "My name is " << this->name << ". I was born for killing"
		<< std::endl << std::endl;
}

FragTrap::FragTrap( FragTrap& other ) : ClapTrap(other){
	std::cout << "Constructor: copy for " << this->name << std::endl;
}

FragTrap::~FragTrap( void ){
	std::cout << "Destructor: "
		<< this->name << " done here. See you late" << std::endl;
}

void	FragTrap::attack( const std::string& target ){
	if (this->energyPoint == 0){
		std::cout << std::endl << "!Oh no, " << this->name
				<< "cannot doing attack without energy :(!"
				<< std::endl << std::endl;
		return ;
}
	std::cout << "***>> " << this->name
			<< "\033[33m" << " attacks " << "\033[0m" << target <<", causing "
			<< this->attackDamage << " points of damage!" << std::endl;
	this->energyPoint--;
	std::cout << "	Ha-ha-ha, i attacked " << target <<std::endl
			<< "		Now, my healf: " << "\033[32m" << this->hitPoint << "\033[0m"
			<< ", my energy: " << "\033[34m" << this->energyPoint << "\033[0m"
			<< ", my damage: " << "\033[31m" << this->attackDamage << "\033[0m"
			<< std::endl;
	std::cout << "		Dad's healf: " << "\033[32m" << ClapTrap::hitPoint << "\033[0m"
			<< ", energy: " << "\033[34m" << ClapTrap::energyPoint << "\033[0m"
			<< ", damage: " << "\033[31m" << ClapTrap::attackDamage << "\033[0m"
			<< std::endl << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount){
	std::cout << "***>> " << this->name
			<< " take " << "\033[31m" << "damage " << "\033[0m" << std::endl;
	attackDamage += amount;
	std::cout << "	I'm feeling my new power " <<std::endl
			<< "		Now, my healf: " << "\033[32m" << this->hitPoint << "\033[0m"
			<< ", my energy: " << "\033[34m" << this->energyPoint << "\033[0m"
			<< ", my damage: " << "\033[31m" << this->attackDamage << "\033[0m"
			<< std::endl;
	std::cout << "		Dad's healf: " << "\033[32m" << ClapTrap::hitPoint << "\033[0m"
		<< ", energy: " << "\033[34m" << ClapTrap::energyPoint << "\033[0m"
		<< ", damage: " << "\033[31m" << ClapTrap::attackDamage << "\033[0m"
		<< std::endl << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount){
	if (this->energyPoint == 0){
		std::cout << std::endl << "!Oh no, " << this->name
				<< "cannot doing repaired without energy :(!"
				<< std::endl << std::endl;
		return ;
	}
	std::cout << "***>> " << this->name
			<< " is " << "\033[32m" << "repairing " << "\033[0m"<< std::endl;
	this->energyPoint--;
	if (this->hitPoint < 100){
		if ((this->hitPoint + amount) > 100){
			this->hitPoint = 100;
		} else {
			this->hitPoint += amount;
		}
		std::cout << "	I'm much better now " <<std::endl;
	} else {
		std::cout << "	My healfy is full " <<std::endl;
	}
	std::cout << "		Now, my healf: " << "\033[32m" << this->hitPoint << "\033[0m"
			<< ", my energy: " << "\033[34m" << this->energyPoint << "\033[0m"
			<< ", my damage: " << "\033[31m" << this->attackDamage << "\033[0m"
			<< std::endl;
	std::cout << "		Dad's healf: " << "\033[32m" << ClapTrap::hitPoint << "\033[0m"
			<< ", energy: " << "\033[34m" << ClapTrap::energyPoint << "\033[0m"
			<< ", damage: " << "\033[31m" << ClapTrap::attackDamage << "\033[0m"
			<< std::endl << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "***> Guys, high five to " << this->name
		<< ". It's me." << std::endl << std::endl;
}
