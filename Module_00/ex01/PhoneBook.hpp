/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:44:43 by msalena           #+#    #+#             */
/*   Updated: 2022/01/29 19:22:57 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cassert>
#include <stdio.h>
#include <cctype>

#define ConNum 8
#define Error "	Please, write something in field"

class Contact{
private:
	size_t		index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	std::string	getFirstName(){
		return (first_name);
	}
	std::string	getLastName(){
		return (last_name);
	}
	std::string	getNickname(){
		return (nickname);
	}
	std::string	getPhoneNumber(){
		return (phone_number);
	}
	std::string	getDarkestSecret(){
		return (darkest_secret);
	}

	void	index_init(size_t index_count){
		index = index_count;
	}
	void	print_index(){
		std::cout << "  " << index << "       " << " | ";
	}

	int	take_first_name(std::string str){
		if (str.length() < 1){
			std::cout << Error << std::endl;
			return 1;
		}
		first_name = str;
		return 0;
	}
	void	print_first_name(){
		size_t	i = 0;
		if (first_name.length() == 10){
			std::cout << first_name << " | ";
		}else if(first_name.length() > 10){
			std::cout << first_name.substr(0, 9) << "." << " | ";

		}else{
			std::cout << first_name;
			while ((10 - first_name.length()) > i){
				std::cout << " ";
				i++;
			}
			std::cout << " | ";
		}
	}

	int	take_last_name(std::string str){
		if (str.length() < 1){
			std::cout << Error << std::endl;
			return 1;
		}
		last_name = str;
		return 0;
	}
	void	print_last_name(){
		size_t	i = 0;

		if (last_name.length() == 10){
			std::cout << last_name << " | ";
		}else if(last_name.length() > 10){
			std::cout << last_name.substr(0, 9) << "." << " | ";
		}else{
			std::cout << last_name;
			while ((10 - last_name.length()) > i){
				std::cout << " ";
				i++;
			}
			std::cout << " | ";
		}
	}

	int	take_nickname(std::string str){
		if (str.length() < 1){
			std::cout << Error << std::endl;
			return 1;
		}
		nickname = str;
		return 0;
	}
	void	print_nickname(){
		size_t	i = 0;

		if (nickname.length() == 10){
			std::cout << nickname;
		}else if(nickname.length() > 10){
			std::cout << nickname.substr(0, 9) << ".";
		}else{
			std::cout << nickname;
			while ((10 - nickname.length()) > i){
				std::cout << " ";
				i++;
			}
		}
		std::cout << std::endl;
	}

	int	take_phone_number(std::string str){
		if (str.length() < 1){
			std::cout << Error << std::endl;
			return 1;
		}
		phone_number = str;
		return 0;
	}

	int	take_darkest_secret(std::string str){
		if (str.length() < 1){
			std::cout << Error << std::endl;
			return 1;
		}
		darkest_secret = str;
		return 0;
	}
};

class PhoneBook{
private:
	Contact	book_arr[8];
public:
	size_t	index_count;
	size_t	eight_fl;
	void	variable_init(){
		index_count = 0;
		eight_fl = 0;
	}
	void	add_new_contact(Contact new_, size_t index_place){
		book_arr[index_place] = new_;
	}
	void	take_contact(size_t index_place, Contact& cont){
		cont = book_arr[index_place];
	}
	void	count_index(){
		index_count++;
	}
	void	count_eight_fl(){
		eight_fl++;
	}
	void	print_index(){
		std::cout << index_count << std::endl;
	}
};

//Work_with_contacts.cpp
void	add_contact(PhoneBook& tele_libro);
void	printing_contact(PhoneBook& tele_libro, size_t i);

//Search_contacts.cpp
void	search_contact(PhoneBook& tele_libro);

