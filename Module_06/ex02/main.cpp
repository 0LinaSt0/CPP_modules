/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:26:32 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 13:49:05 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main (void){
	std::cout << "\nLet's creating tree new random Base classes"
			<< std:: endl;
	Base*	randOne = generate();
	std::cout << " -- FIRST" << std::endl;
	Base*	randTwo = generate();
	std::cout << " -- SECOND" << std::endl;
	Base*	randTree = generate();
	std::cout << " -- THIRD" << std::endl;

	std::cout << "\n We could determine the type of classes"
			<< std::endl << std::endl;
	
	//Check type for randOne
	std::cout << "--> Check type of FIRST random class" << std::endl;
	std::cout << "	First way - using pointer: ";
	identify(randOne);
	std::cout << "\n	Second way - using link: ";
	identify(*randOne);
	std::cout << std::endl;
	
	//Check type for randTwo
	std::cout << "--> Check type of SECOND random class" << std::endl;
	std::cout << "	Way - using pointer: ";
	identify(randTwo);
	std::cout << "\n	Way - using link: ";
	identify(*randTwo);
	std::cout << std::endl;

	//Check type for randTree
	std::cout << "--> Check type of THIRD random class" << std::endl;
	std::cout << "	Way - using pointer: ";
	identify(randTree);
	std::cout << "\n	Way - using link: ";
	identify(*randTree);
	std::cout << std::endl;

	delete randOne;
	delete randTwo;
	delete randTree;
}