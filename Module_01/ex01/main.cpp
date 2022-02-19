/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:17:02 by msalena           #+#    #+#             */
/*   Updated: 2022/02/19 18:09:54 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	int	N_input = 6;
	std::string name_input;
	Zombie*		_new;

	while (name_input.length() == 0){
		std::cout << "Wich name will they have: ";
		std::getline(std::cin, name_input, '\n');
		std::cout << std::endl;
	}
	_new = zombieHorde(N_input, name_input);
	delete [] _new;
	return 0;
}
