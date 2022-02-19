/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:44:17 by msalena           #+#    #+#             */
/*   Updated: 2022/02/19 18:53:23 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main( void ){
	Karen	new_K;
	std::string	tmp;

	while (tmp.length() == 0){
		std::cout << "-->Please, enter one of four levels: DEBUG, INFO, WARNING or ERROR" << std::endl << "	";
		std::getline(std::cin, tmp, '\n');
	}
	new_K.complain(tmp);
	return 0;
}
