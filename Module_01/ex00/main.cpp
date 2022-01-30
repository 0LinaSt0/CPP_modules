/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:24:58 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 17:54:04 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ){
	std::string	name_1;
	std::string	name_2;
	Zombie*		Zombie_2;

	std::cout << "Please, write name for stack zombie: ";
	std::getline(std::cin, name_1, '\n');
	std::cout << "Now, write name for heap zombie: ";
	std::getline(std::cin, name_2, '\n');
	std::cout << std::endl;
	randomChump(name_1);
	Zombie_2 = newZombie(name_2);
	std::cout << "Oops, allocation problems" << std::endl;
	delete Zombie_2;
	return 0;
}
