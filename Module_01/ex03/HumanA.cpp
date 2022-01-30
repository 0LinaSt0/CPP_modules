/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:05:02 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 20:05:56 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& came_name, Weapon& w_take) : name ( came_name ), w ( w_take ){
		std::cout << "-->My name is " << this->name << " and i was born" << std::endl;
}
HumanA::~HumanA( void ){
	std::cout << "-->" << this->name << " go out now. See you later" << std::endl;
}
void	HumanA::attack( void ){
	std::cout << "	" << this->name << " attacks with their " << this->w.getType() << std::endl;
}
