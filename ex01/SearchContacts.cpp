/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search_contacts.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:47:05 by msalena           #+#    #+#             */
/*   Updated: 2022/01/27 14:56:01 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int	index_error_NotNum(std::string input_str){
	size_t		i = 0;

	while (i < input_str.length()){
		if (!(std::isdigit(input_str[i++]))){
			std::cout << "	!Wrong index!" << std::endl;
			return 1;
		}
	}
	return 0;
}
static int	index_error_OtherIndex(size_t index, PhoneBook& tele_libro){
	if (!index || index > tele_libro.eight_fl){
		std::cout << "	!Wrong index!" << std::endl;
		return 1;
	}
	return 0;
}

static void	showing_special_contact(PhoneBook& tele_libro){
	std::string	input_str;
	size_t		contact_index;

	std::cout << "-->Do you want to see specific contact? (press y if yes): ";
	std::cin >> input_str;
	if (input_str.compare("y")){
		return ;
	}
	std::cout << "	Index of contact which you want to see: ";
	std::cin >> input_str;
	if (index_error_NotNum(input_str))
		return ;
	contact_index = std::stol(input_str);
	if (index_error_OtherIndex(contact_index, tele_libro))
		return ;
	std::cout << std::endl;
	printing_contact(tele_libro, (contact_index - 1));
}

void	search_contact(PhoneBook& tele_libro){
	size_t	i_contacts = 0;

	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << " index    " << " | " << "first name"
			<< " | " << "last name " << " | " << "nickname  " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	while(i_contacts < tele_libro.eight_fl){
		printing_contact(tele_libro, i_contacts++);
	}
	std::cout << std::endl
		<< "-------------------------------------------------" << std::endl;
	showing_special_contact(tele_libro);
}
