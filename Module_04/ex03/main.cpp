/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:53:43 by msalena           #+#    #+#             */
/*   Updated: 2022/02/12 19:10:50 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	deleteFunc(ICharacter* bob, ICharacter* me,
				IMateriaSource* src){
	delete bob;
	std::cout <<std::endl;
	delete me;
	std::cout <<std::endl;
	delete src;
	std::cout <<std::endl;
}

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	// src->learnMateria(new Ice()); // plus one slot

	ICharacter* me = new Character("ME");
	std::cout << std::endl;
	AMateria* tmp;

	if(!(tmp = src->createMateria("ICE"))){
		deleteFunc(nullptr, me, src);
		return 1;
	}
	me->equip(tmp);
	if(!(tmp = src->createMateria("CURE"))){
		deleteFunc(nullptr, me, src);
		return 1;
	}
	me->equip(tmp);
	if(!(tmp = src->createMateria("ICE"))){
		deleteFunc(nullptr, me, src);
		return 1;
	}
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << std::endl;

	// return 1;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	me->unequip(1);
	delete AMateria::needDelet;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);


	deleteFunc(bob, me, src);

	return 0;
}
