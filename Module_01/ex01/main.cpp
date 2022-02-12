/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:17:02 by msalena           #+#    #+#             */
/*   Updated: 2022/02/12 18:43:23 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){ //do i need check the new return nullptr?
	int	N_input = 6;
	std::string name_input;
	Zombie*		_new;

	std::cout << "Wich name will they have: ";
	std::getline(std::cin, name_input, '\n');
	std::cout << std::endl;
	_new = zombieHorde(N_input, name_input);
	delete [] _new;
	return 0;
}
