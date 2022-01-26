/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:44:43 by msalena           #+#    #+#             */
/*   Updated: 2022/01/26 18:22:45 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cassert>
#include <stdio.h>

class Contact{
private:
	size_t		index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	void	take_index(){
		index++;
	}
	void	print_index(){
		std::cout << "  " << index << "       " << " | ";
	}
	void	take_first_name(std::string str){
		first_name = str;
	}
	void	print_first_name(){
		if (first_name.length() == 10){
			std::cout << "  " << first_name << "       " << " | ";
		}else if(first_name.length() > 10){
			//printing just 9 characters wirh dot
		}else{
			//printig all string and puting spaces for 10 chars
		}
	}
	void	take_last_name(std::string str){
		last_name = str;
	}
	void	print_last_name(){
		if (last_name.length() == 10){
			std::cout << "  " << last_name << "       " << " | ";
		}else if(last_name.length() > 10){
			//printing just 9 characters wirh dot
		}else{
			//printig all string and puting spaces for 10 chars
		}
	}
	void	take_nickname(std::string str){
		nickname = str;
	}
	void	print_nickname(){
		if (nickname.length() == 10){
			std::cout << "  " << first_name << "       " << " | ";
		}else if(nickname.length() > 10){
			//printing just 9 characters wirh dot
		}else{
			//printig all string and puting spaces for 10 chars
		}
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
	int		eight_fl;

	void	add_new_contact(Contact new_, size_t index_place){
		book_arr[index_place] = new_;
	}
	void	take_contact(size_t index_place, Contact& cont){
		cont = book_arr[index_place];
	}
	void	take_count_index(){
		index_count++;
	}
	void	print_index(){
		std::cout << index_count << std::endl;
	}
};

//PhoneBook

