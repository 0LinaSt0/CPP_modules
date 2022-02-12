/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:20:06 by msalena           #+#    #+#             */
/*   Updated: 2022/02/12 18:43:23 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( const std::string& came_name ) : name ( came_name ), w ( nullptr ){
		std::cout << "-->My name is " << this->name << " and i was born" << std::endl;
}
HumanB::~HumanB( void ){
	std::cout << "-->" << this->name << " go out now. See you later" << std::endl;
}
void	HumanB::setWeapon( Weapon& w_take ){
	this->w = &w_take;
}
void	HumanB::attack( void ){
	if (HumanB::w){
		std::cout << "	" << this->name << " attacks with their " << this->w->getType() << std::endl;
	} else {
		std::cout << "Please, call setWeapon function for weapon initialization" << std::endl;
	}
}
