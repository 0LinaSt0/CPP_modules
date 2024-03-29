/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:39:36 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 10:19:21 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ){
	setAttrib("<withot_name>");

	std::cout << "Constructor: default son" << std::endl;
}

ScavTrap::ScavTrap( const std::string& name){
	setAttrib(name);

	std::cout << "Constructor: "
			<< "My name is "
			<< this->name
			<< ". I was born for killing"
			<< std::endl << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ){
	ClapTrap::operator=(other);
	std::cout << "Constructor: copy for "
			<< this->name
			<< std::endl;
}

ScavTrap::~ScavTrap( void ){
	std::cout << "Destructor: "
			<< this->name
			<< " done here. See you late"
			<< std::endl;
}

void	ScavTrap::attack( const std::string& target ){
	std::cout << this->name
			<< " is asking dad "
			<< ClapTrap::name
			<< " doing attack "
			<< std::endl;
	ClapTrap::attack(target);
}

void	ScavTrap::takeDamage(unsigned int amount){
	std::cout << this->name
			<< " is asking dad "
			<< ClapTrap::name
			<< " taking damage "
			<< std::endl;
	ClapTrap::takeDamage(amount);
}

void	ScavTrap::beRepaired(unsigned int amount){
	std::cout << this->name
			<< " is asking dad "
			<< ClapTrap::name
			<< " being repired "
			<< std::endl;
	ClapTrap::beRepaired(amount);
}

void	ScavTrap::guardGate( void ){
	std::cout << "~~> Attention! "
			<< this->name
			<< " is gate now"
			<< std::endl << std::endl;
}

void ScavTrap::setAttrib(const std::string &name){
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 2;
}
