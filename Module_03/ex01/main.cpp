/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:24:30 by msalena           #+#    #+#             */
/*   Updated: 2022/02/06 19:14:44 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ){
	std::string	name;
	std::string	par_name;
	std::string	target = "BAD GUY";

	while (par_name.length() == 0){
		std::cout << std::endl << "\tPlease, give name for ClapTrap: ";
		std::getline(std::cin, par_name, '\n');
		std::cout << std::endl;
	}
	while (name.length() == 0){
		std::cout << "\tPlease, give name for ScavTrap: ";
		std::getline(std::cin, name, '\n');
		std::cout << std::endl;
	}

{
	ScavTrap	new_( name, par_name );

	new_.attack(target);
	new_.takeDamage(1);
	new_.beRepaired(3);
	new_.attack(target);
	new_.attack(target);
	new_.takeDamage(1);
	new_.beRepaired(1);
	new_.attack(target);
	new_.beRepaired(1);
	new_.guardGate();
}


}
