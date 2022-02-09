/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:56:41 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 14:01:20 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl << "\t****** Animal will created now ******" << std::endl;
	const Animal* meta = new Animal();

	std::cout << std::endl << "\t****** WrongAnimal will created now ******" << std::endl;
	const WrongAnimal* WrongMeta = new WrongAnimal();

	std::cout << std::endl << "\t****** Dog will created now ******" << std::endl;
	const Animal* j = new Dog();

	std::cout << std::endl << "\t****** Cat will created now ******" << std::endl;
	const Animal* i = new Cat();

	std::cout << std::endl << "\t****** WrongCat will created now ******" << std::endl;
	const WrongAnimal* WrongI = new WrongCat();



	std::cout << std::endl
			<< "Let's looking dog type: "
			<< j->getType() << " " << std::endl;
	std::cout << std::endl
			<< "Let's looking cat type: "
			<< i->getType() << " "
			<< std::endl;
	std::cout << std::endl
			<< "Let's looking WrongCat type: "
			<< WrongI->getType() << " "
			<< std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();//will output the dog sound!
	std::cout  << std::endl
			<< "Let's look WrongCat sound: ";
			WrongI->makeSound();
			std::cout << std::endl;//will output WrongAnimal sound!
	meta->makeSound();
	WrongMeta->makeSound();

	std::cout << std::endl << "\t****** Animal will deleted now ******" << std::endl;
	delete meta;
	std::cout << std::endl << "\t****** Dog will deleted now ******" << std::endl;
	delete j;
	std::cout << std::endl << "\t****** Cat will deleted now ******" << std::endl;
	delete i;
	std::cout << std::endl << "\t****** WrongAnimal will deleted now ******" << std::endl;
	delete WrongMeta;
	std::cout << std::endl << "\t****** WrongCat will deleted now ******" << std::endl;
	delete WrongI;
	return 0;
}
