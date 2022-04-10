/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:13:57 by msalena           #+#    #+#             */
/*   Updated: 2022/04/10 12:34:41 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int	main(void){
	std::vector<int>	contan;
	
	std::cout << "\n--> Let create new INT vector array:"
				<< std::endl;
	for (int i=0; i != 6; i++){
		contan.push_back(i + 1);
		std::cout << "	elem["
				<< i
				<< "]: "
				<< contan[i]
				<< std::endl;
	}
	try {
		int	index;
		
		std::cout << "\n--> Let check easyfind function:"
				<< std::endl;
		index = easyfind(contan, 5);
		std::cout << "	elem[4]: "
				<< contan[4]
				<< " == index_elem["
				<< index
				<< "]: "
				<< contan[index]
				<< std::endl;
		
		index = easyfind(contan, 3);
		std::cout << "	elem[2]: "
				<< contan[2]
				<< " == index_elem["
				<< index
				<< "]: "
				<< contan[index]
				<< std::endl;
		
		//error_example
		index = easyfind(contan, 9);
		std::cout << "	elem[8]: "
				<< contan[8]
				<< " == index_elem["
				<< index
				<< "]: "
				<< contan[index]
				<< std::endl;
	} catch (std::exception& ){
		std::cout << "\nError: array doesn't have this elem"
				<< std::endl;
	}
}