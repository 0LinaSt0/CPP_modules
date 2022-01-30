/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:24:42 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 16:09:35 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

size_t Zombie::N_zombe = 1;

Zombie::Zombie( void ){
	std::cout << "\033[32m" << Zombie::N_zombe << " zombie" << " was created"
			<< "\033[0m" << std::endl;
	Zombie::N_zombe++;
}

Zombie::~Zombie( void ){
	std::cout << "\033[31m" << (Zombie::N_zombe - 1) << " was died" << std::endl;
	Zombie::N_zombe--;
}

void	Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}

void	Zombie::setName( std::string name ){
	this->name = name;
}
