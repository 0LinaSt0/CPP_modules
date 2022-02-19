/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:24:58 by msalena           #+#    #+#             */
/*   Updated: 2022/02/19 18:03:25 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ){
	std::string	name_1;
	std::string	name_2;
	Zombie*		Zombie_2;

	while(name_1.length() == 0){
		std::cout << "Please, write name for stack zombie: ";
		std::getline(std::cin, name_1, '\n');
		std::cout << std::endl;
	}
	while (name_2.length() == 0){
		std::cout << "Now, write name for heap zombie: ";
		std::getline(std::cin, name_2, '\n');
		std::cout << std::endl;
	}
	randomChump(name_1);
	Zombie_2 = newZombie(name_2);
	delete Zombie_2;
	return 0;
}
