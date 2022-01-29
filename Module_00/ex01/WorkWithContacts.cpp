/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorkWithContacts.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:36:39 by msalena           #+#    #+#             */
/*   Updated: 2022/01/29 16:23:14 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printing_contact(PhoneBook& tele_libro, size_t i){
	Contact cont;

	tele_libro.take_contact(i, cont);
	cont.print_index();
	cont.print_first_name();
	cont.print_last_name();
	cont.print_nickname();
}

static void	fields_initialization(Contact& new_cont){
	std::string	input_str;

	std::cin.ignore(1, '\n'); //don't take new str before not see \n

	for(int fl = 1; fl; ){
		std::cout << "	First name: ";
		std::getline(std::cin, input_str);
		fl = new_cont.take_first_name(input_str);
	}
	for(int fl = 1; fl; ){
		std::cout << "	Last name: ";
		std::getline(std::cin, input_str);
		fl = new_cont.take_last_name(input_str);
	}
	for(int fl = 1; fl; ){
		std::cout << "	Nickname: ";
		std::getline(std::cin, input_str);
		fl = new_cont.take_nickname(input_str);
	}
	for(int fl = 1; fl; ){
		std::cout << "	Phone number: ";
		std::getline(std::cin, input_str);
		fl = new_cont.take_phone_number(input_str);
	}
	for(int fl = 1; fl; ){
		std::cout << "	Darkest secret: ";
		std::getline(std::cin, input_str);
		fl = new_cont.take_darkest_secret(input_str);
	}
}

void	add_contact(PhoneBook& tele_libro){
	Contact	new_cont;

	std::cout << "-->Please, input some information about new contact"
			<< std::endl;
	fields_initialization(new_cont);

	tele_libro.count_index();
	if (tele_libro.eight_fl != ConNum){
		tele_libro.count_eight_fl();
	}
	if (tele_libro.index_count > ConNum){
		tele_libro.index_count = 1;
	}
	new_cont.index_init(tele_libro.index_count);
	tele_libro.add_new_contact(new_cont, (tele_libro.index_count - 1));
	std::cout << "!New contact was added!" << std::endl << std::endl;
}
