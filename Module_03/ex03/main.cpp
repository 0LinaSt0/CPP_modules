/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:24:30 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 10:25:41 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ){
	std::string	diamond_name;
	std::string	frag_name;
	std::string	scav_name;
	std::string	target = "BAD GUY";

	while (diamond_name.length() == 0){
		std::cout << std::endl << "\tPlease, give name for DiamondTrap: ";
		std::getline(std::cin, diamond_name, '\n');
		std::cout << std::endl;
	}
	while (scav_name.length() == 0){
		std::cout << "\tPlease, give name for ScavTrap: ";
		std::getline(std::cin, scav_name, '\n');
		std::cout << std::endl;
	}
	while (frag_name.length() == 0){
		std::cout << "\tPlease, give name for FragTrap: ";
		std::getline(std::cin, frag_name, '\n');
		std::cout << std::endl;
	}
{
	DiamondTrap	new_( diamond_name, scav_name, frag_name );

	new_.printInfo();
	new_.attack(target);
	new_.takeDamage(1);
	new_.beRepaired(3);
	new_.attack(target);
	new_.attack(target);
	new_.takeDamage(1);
	new_.beRepaired(1);
	new_.attack(target);
	new_.beRepaired(1);

	//custom message
	std::cout << std::endl
			<< "\t~~~~~~ Look at custom messeges ~~~~~~"
			<< std::endl << std::endl;
	new_.guardGate();
	new_.highFivesGuys();
	new_.whoAmI();
}
	return 0;
}
