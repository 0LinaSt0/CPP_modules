/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:13:20 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 14:23:54 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void ){
	const Animal*	arr[20];

	for (int i=0; i < 20; i++){
		if (i < 10)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
		arr[i]->makeSound();
	}
	arr[3]->takeIdeas();
	arr[19]->takeIdeas();

	for (int i=0; i < 20; i++){
		std::cout << "\t~~~~~~~~~ "
				<< i
				<< " ~~~~~~~~~"
				<<std::endl;
		delete arr[i];
	}
	return 0;
}
