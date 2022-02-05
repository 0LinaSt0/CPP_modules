/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:24:30 by msalena           #+#    #+#             */
/*   Updated: 2022/02/05 21:31:58 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ){
	std::string	input;
	std::string	target = "BAD GUY";

	while (input.length() == 0){
		std::cout << "Please, give name for ClapTrap: ";
		std::getline(std::cin, input, '\n');
		std::cout << std::endl;
	}

	ClapTrap	new_ ( input );

	new_.attack(target);
	new_.takeDamage(1);
	new_.beRepaired(3);
	new_.attack(target);
	new_.attack(target);
	new_.attack(target);
	new_.takeDamage(1);
	new_.beRepaired(1);
	new_.beRepaired(1);
	new_.beRepaired(1);
	new_.attack(target);
	new_.takeDamage(4);
	new_.attack(target);
	new_.attack(target);
	new_.beRepaired(1);
}
