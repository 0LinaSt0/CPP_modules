/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:36:18 by msalena           #+#    #+#             */
/*   Updated: 2022/01/29 19:54:59 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	space_scroll(std::string &str){
	size_t	i, z = 0;

	i = str.find(" ");
	z = str.find("	");
	if (i != std::string::npos && z != std::string::npos
			&& i && z){
		if (i > z)
			str = str.substr(0, z);
		else
			str = str.substr(0, i);
	}else if (i != std::string::npos && i){
		str = str.substr(0, i);
	}else if (z != std::string::npos && z){
		str = str.substr(0, z);
	}
}

int	main(int argc, char **argv){

	std::string	out_str;
	PhoneBook	tele_libro;

	(void)argv, (void)argc;
	tele_libro.variable_init();
	while (1){
		std::getline(std::cin, out_str, '\n');
		space_scroll(out_str);
		if (out_str.compare("ADD") == 0){
			add_contact(tele_libro);
		}else if (out_str.compare("SEARCH") == 0){
			search_contact(tele_libro);
		}else if (out_str.compare("EXIT") == 0)
			return (0);
		else{
			std::cout << "-->Programm takes one of three arguments: ADD, SEARCH or EXIT:"
				<< std::endl << "	please try one of that" << std::endl;
		}
	}
	return (0);
}
