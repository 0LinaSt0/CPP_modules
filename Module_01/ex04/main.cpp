/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:14:35 by msalena           #+#    #+#             */
/*   Updated: 2022/02/19 18:50:15 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

int	find_same(std::string& tmp, std::string& what_find,
		std::string& on_what_change){
	size_t	place = 0;
	size_t	i = 0;

	while (1){
		if ((place = tmp.find(what_find, (place + i))) == std::string::npos){
			break ;
		}
		tmp.erase(place, (what_find).length()); // delete old part
		tmp.insert(place, on_what_change); // add new part of str
		i = (on_what_change).length();
	}
	return 0;

}

int	open_files(std::ifstream& input_file, std::ofstream& new_file, char **argv){
	std::string		file_name;

	file_name.append(argv[1]);
	file_name.append(".replace");
	input_file.open(argv[1]);
	if (!input_file.is_open()){
		std::cout << "	Error: Something wrong" << std::endl;
		return 1;
	}
	new_file.open(file_name);
	if (!new_file.is_open()){
		std::cout << "	Error: Something wrong" << std::endl;
		return 1;
	}
	return 0;
}

int	main (int argc, char **argv){
	if (argc != 4){
		std::cout << "-->Programm take three agruments: [filename] [str1] [str2]" << std::endl;
		return 1;
	}
	std::string		argv_2 = (std::string(argv[2]));
	std::string		argv_3 = (std::string(argv[3]));
	std::ifstream	input_file;
	std::ofstream	new_file;
	std::string		tmp;


	if (open_files(input_file, new_file, argv)){
		return 1;
	}
	while (std::getline(input_file, tmp, '\n')){
		tmp.append("\n");
		find_same(tmp, argv_2, argv_3);
		new_file << tmp;
	}
	input_file.close();
	new_file.close();
	return 0;
}
