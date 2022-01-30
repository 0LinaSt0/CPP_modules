/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:36:46 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 20:04:49 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& str) : type ( str ){
		std::cout << "\033[31m" << "~I was created for killing~" << "\033[0m" << std::endl;
}
Weapon::~Weapon( void ){
	std::cout << "\033[34m" << "~I did there all for what i was born~" << "\033[0m" << std::endl;
}
const std::string& Weapon::getType(){
	return Weapon::type;
}
void	Weapon::setType(const std::string& str){
	this->type = str;
}


