/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:36:18 by msalena           #+#    #+#             */
/*   Updated: 2022/01/26 18:28:44 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	add_contact(PhoneBook& tele_libro){
	Contact	new_cont;

	std::cout << "-->Please, input some information about new contact"
			<< std::endl;
	std::cout << "	First name:";
	std::cin >> new_cont.first_name;
	std::cout << "	Last name:";
	std::cin >> new_cont.last_name;
	std::cout << "	Nickname:";
	std::cin >> new_cont.nickmame;
	std::cout << "	Phone number:";
	std::cin >> new_cont.phone_number;
	std::cout << "	Darkest secret:";
	std::cin >> new_cont.darkest_secret;
}

int	main(int argc, char **argv){
	std::string	out_str;
	PhoneBook	tele_libro;

	(void)argv, (void)argc;
	// printf ("%p\n", out_str.c_str());
	// if (out_str.compare("ADD\n") != 0)
	// 	std::cout << "pfffff\n";
	// return (1);
	// if (argc != 1){
	// 	std::cout << "Try without any arguments" << std::endl;
	// 	return (1);
	// }

	while (1){
		std::cin >> out_str;
		if (out_str.compare("ADD") == 0)
			std::cout << "ADD" << std::endl;
		else if (out_str.compare("SEARCH") == 0)
			std::cout << "SEARCH" << std::endl;
		else if (out_str.compare("EXIT") == 0)
			return (0);
		else{
			std::cout << "-->Programm takes one of three arguments: ADD, SEARCH or EXIT:"
				<< std::endl << "pleas try one of that" << std::endl;
		}
	}
	return (0);
}
