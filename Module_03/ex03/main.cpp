/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polina <polina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:24:30 by msalena           #+#    #+#             */
/*   Updated: 2022/02/08 16:29:58 by polina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ){
	std::string	name_f;
	std::string	par_name;
	std::string	target = "BAD GUY";

	while (par_name.length() == 0){
		std::cout << std::endl << "\tPlease, give name for ClapTrap: ";
		std::getline(std::cin, par_name, '\n');
		std::cout << std::endl;
	}
	while (name_f.length() == 0){
		std::cout << "\tPlease, give name for FragTrap: ";
		std::getline(std::cin, name_f, '\n');
		std::cout << std::endl;
	}
{
	FragTrap	new_( name_f, par_name );

	new_.attack(target);
	new_.takeDamage(1);
	new_.beRepaired(3);
	new_.attack(target);
	new_.attack(target);
	new_.takeDamage(1);
	new_.beRepaired(1);
	new_.attack(target);
	new_.beRepaired(1);
	new_.highFivesGuys();
}
	return 0;
}
