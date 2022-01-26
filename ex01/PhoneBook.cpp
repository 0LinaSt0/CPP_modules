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
void	cout_contact(PhoneBook& tele_libro, int i){
	Contact cont;
	
	tele_libro.take_contact(i, cont);
	cont.print_index();
	cont.print_first_name();
	cont.print_last_name();
	cont.print_nickname();
}
void	search_contact(PhoneBook& tele_libro){
	int	i_contacts = 0;

	std::cout << "index     " << " | " << "first name"
			<< " | " << "last name " << " | " << "nickname  " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	if(tele_libro.eight_fl == 8){
		while(i_contacts < tele_libro.eight_fl){
			cout_contact(tele_libro, i_contacts++);
		}
	}else{
		while(i_contacts < tele_libro.index_count){
			cout_contact(tele_libro, i_contacts++);
		}
	}
	std::cout << "-------------------------------------------------" << std::endl;
	//function about shoing special contact
}

void	add_contact(PhoneBook& tele_libro){
	Contact	new_cont;
	std::string	input_str;

	tele_libro.eight_fl = 0;
	std::cout << "-->Please, input some information about new contact"
			<< std::endl;
	std::cout << "	First name: ";
	std::cin >> input_str;
	new_cont.take_first_name(input_str);
	std::cout << "	Last name: ";
	std::cin >> input_str;
	new_cont.take_last_name(input_str);
	std::cout << "	Nickname: ";
	std::cin >> input_str;
	new_cont.take_nickname(input_str);
	std::cout << "	Phone number: ";
	std::cin >> input_str;
	new_cont.take_phone_number(input_str);
	std::cout << "	Darkest secret: ";
	std::cin >> input_str;
	new_cont.take_darkest_secret(input_str);
	new_cont.take_index();
	tele_libro.take_count_index();
	if (tele_libro.index_count == 0){
		tele_libro.eight_fl = 8;
	}
	if (tele_libro.index_count > 8){
		tele_libro.index_count = 1;
	}
		tele_libro.add_new_contact(new_cont, (tele_libro.index_count - 1));
	std::cout << "!New contact was added!" << std::endl << std::endl;
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
		if (out_str.compare("ADD") == 0){
			add_contact(tele_libro);
		}
		else if (out_str.compare("SEARCH") == 0)
			std::cout << "SEARCH" << std::endl;
		else if (out_str.compare("EXIT") == 0)
			return (0);
		else{
			std::cout << "-->Programm takes one of three arguments: ADD, SEARCH or EXIT:"
				<< std::endl << "	pleas try one of that" << std::endl;
		}
	}
	return (0);
}
