/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:05:34 by msalena           #+#    #+#             */
/*   Updated: 2022/01/26 14:43:42 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include <string>
#include <cctype>

void	my_toupper(std::string& str){
	for(size_t i=0; i < str.size(); i++)
		str[i] = std::toupper((char)str[i]);
}

int	main(int argc, char **argv){
	std::string	argv_str;
	if (argc < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i=1; i<argc; i++){
		argv_str = argv[i];
		my_toupper(argv_str);
		std::cout << argv_str;
	}
	std::cout << std::endl;
	return (0);
}
