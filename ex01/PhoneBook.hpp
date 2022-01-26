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
public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickmame;
	std::string	phone_number;
	std::string	darkest_secret;
	void	take_index(size_t num_elem){
		this->index = num_elem;
	}
	void	print_index(){
		std::cout << this->index << std::endl;
	}
};

class PhoneBook{
private:
	Contact	book_arr[8];
public:
	size_t	index;
	
	void	add_new_contact(Contact new_, size_t index_place){
		book_arr[index_place] = new_;
	}
};

//PhoneBook

