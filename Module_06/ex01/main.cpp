/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:36:21 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 14:03:19 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t	serialize(Data* ptr){
	uintptr_t	ptrAddress;

	ptrAddress = reinterpret_cast<uintptr_t>(ptr);
	return (ptrAddress);
}

Data*	deserialize(uintptr_t raw){
	Data*	ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}

int	main(void){
	Data*		data = new Data;
	std::string	dataName;
	
	while (!dataName.length()){
		std::cout << std::endl
				<< "Please, give name too Data struct: ";
		std::getline(std::cin, dataName, '\n');
		std::cout << std::endl;
	}
	
	data->whoIam = dataName;
	data->myIntaddress = 0;

	std::cout << "-->I am "
			<< data->whoIam
			<< " my address is "
			<< data
			<< std::endl << std::endl;

	data->myIntaddress = serialize(data);

	std::cout << "-->Integer type of my address is "
			<< data->myIntaddress 
			<< std::endl << std::endl;
	
	std::cout << "-->This is my address "
			<< data
			<< ". And this is my address which"
			<< " was converted from integer "
			<< deserialize(data->myIntaddress)
			<< std::endl << std::endl;
	
	delete data;
}