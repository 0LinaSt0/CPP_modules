/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:44:43 by msalena           #+#    #+#             */
/*   Updated: 2022/01/27 14:48:25 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cassert>
#include <stdio.h>
#include <cctype>

#define ConNum 8

class Contact{
private:
	size_t		index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	void	index_init(size_t index_count){
		index = index_count;
	}
	void	print_index(){
		std::cout << "  " << index << "       " << " | ";
	}

	void	take_first_name(std::string str){
		first_name = str;
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

	void	take_last_name(std::string str){
		last_name = str;
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

	void	take_nickname(std::string str){
		nickname = str;
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

	void	take_phone_number(std::string str){
		phone_number = str;
	}

	void	take_darkest_secret(std::string str){
		darkest_secret = str;
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

