/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:17:28 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 16:32:58 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ){
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << std::endl << "-->Let's checking memory addresses" << std::endl;
	std::cout << "	#1 Memory address of str: " << &string << std::endl;
	std::cout << "	#2 Memory address of str: " << stringPTR << std::endl;
	std::cout << "	#3 Memory address of str: " << &stringREF << std::endl << std::endl;

	std::cout << "-->Let's cheching strs value" << std::endl;
	std::cout << "	#1 Value of str: " << string << std::endl;
	std::cout << "	#2 Value of str: " << *stringPTR << std::endl;
	std::cout << "	#2 Value of str: " << stringREF << std::endl << std::endl;

	return 0;
}
