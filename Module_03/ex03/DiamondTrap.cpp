/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polina <polina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:34:30 by polina            #+#    #+#             */
/*   Updated: 2022/02/08 16:36:25 by polina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) 
					: ClapTrap (), ScavTrap(), FragTrap(){
	setAttrib("<without_name>");

	std::cout << "Constructor: default son of sons" << std::endl;
} 

DiamondTrap::DiamondTrap( const std::string& name,
						const std::string& ScavName,
						const std::string& FragName )
						: ClapTrap ( name + "_clap_name" ),
						ScavTrap ( ScavName ),
						FragTrap ( FragName ){
	setAttrib(name);
	
	std::cout << "Constructor: "
		<< "My name is " 
		<< this->name 
		<< ". I was born by Scav & Frag for killing"
		<< std::endl << std::endl;
	
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ){
	ClapTrap::operator=(other);

	std::cout << "Constructor: copy for " 
			<< this->name 
			<< std::endl;
}

DiamondTrap::~DiamondTrap( void ){
	std::cout << "Destructor: "
			<< this->name 
			<< " done here. See you late" 
			<< std::endl;
}

void	DiamondTrap::attack( const std::string& target ){
	std::cout << this->name
			<< " is asking my dad Scav doing attack -> ";
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage( unsigned int amount ){
	std::cout << this->name
			<< " is asking my dad Scav doing attack -> ";
	ScavTrap::takeDamage(amount);
}

void	DiamondTrap::beRepaired( unsigned int amount ){
	std::cout << this->name
			<< " is asking my dad Scav doing attack -> ";
	ScavTrap::beRepaired(amount);
}

void	DiamondTrap::whoAmI( void ){
	std::cout << "///> Guys, my name is " 
			<< this->name
			<< " and granddad Clab name is " 
			<< ClapTrap::name
			<< std::endl << std::endl;
}

void	DiamondTrap::setAttrib( const std::string& name ){
	this->name = name;
	ClapTrap::hitPoint = FragTrap::hitPoint;
	ClapTrap::energyPoint = ScavTrap::energyPoint;
	ClapTrap::attackDamage = FragTrap::attackDamage;
}