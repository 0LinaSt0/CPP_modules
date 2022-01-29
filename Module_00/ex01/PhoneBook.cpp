/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:36:18 by msalena           #+#    #+#             */
/*   Updated: 2022/01/29 16:27:57 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv){

	std::string	out_str;
	PhoneBook	tele_libro;

	(void)argv, (void)argc;
	tele_libro.variable_init();
	while (1){
		std::cin >> out_str;
		if (out_str.compare("ADD") == 0){
			add_contact(tele_libro);
		}else if (out_str.compare("SEARCH") == 0){
			search_contact(tele_libro);
		}else if (out_str.compare("EXIT") == 0)
			return (0);
		else{
			std::cout << "-->Programm takes one of three arguments: ADD, SEARCH or EXIT:"
				<< std::endl << "	pleas try one of that" << std::endl;
		}
	}
	return (0);
}
