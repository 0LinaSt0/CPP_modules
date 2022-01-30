/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:24:42 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 15:07:13 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 size_t Zombie::color_fl = 1;

Zombie::Zombie( void ){

}

Zombie::Zombie( std::string name ){
	setName(name);

	color();
	std::cout << this->name << "\033[0m" << " was created" << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << this->name << " was died" << std::endl;
}

void	Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ){
	this->name = name;
}

void	Zombie::color( void ){

	if ((Zombie::color_fl % 2) != 0){
		std::cout << "\033[32m";
		Zombie::color_fl++;
	}else{
		std::cout << "\033[31m";
		Zombie::color_fl++;
	}
}
