/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:14:35 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 21:09:59 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

int	main (int argc, char **argv){
	std::ifstream	input_file;
	std::ofstream	new_file;
	std::string		file_name;
	std::string		tmp;

	(void)argc;
	// if (argc != 4){
	// 	std::cout << "-->Programm take three agruments: [filename] [str1] [str2]" << std::endl;
	// 	return 1;
	// }
	file_name.append(argv[1]);
	file_name.append(".replace");
	input_file.open(argv[1]);
	new_file.open(file_name);
	if (!input_file.is_open() || !new_file.is_open()){
		std::cout << "	Error: Something wrong" << std::endl;
		return 1;
	}
	while (std::getline(input_file, tmp, '\n')){
		tmp.append("\n");
		new_file << tmp;
	}
	input_file.close();
	new_file.close();
	return 0;
}
