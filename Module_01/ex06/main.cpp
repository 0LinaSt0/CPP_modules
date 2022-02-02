/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:44:17 by msalena           #+#    #+#             */
/*   Updated: 2022/02/02 19:36:47 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main( void ){
	Karen	new_K;
	std::string	tmp;
	// int		

	std::cout << "-->Please, enter one of four levels: DEBUG, INFO, WARNING or ERROR" << std::endl << "	";
	std::getline(std::cin, tmp, '\n');
	new_K.complain(tmp);
	switch (new_K.iter){
	case	0:
		new_K.getMethods();
		new_K.iter++;
	case	1:
		new_K.getMethods();
		new_K.iter++;
	case	2:
		new_K.getMethods();
		new_K.iter++;
	case	3:
		new_K.getMethods();
		new_K.iter++;
	default :
		break ;
	}
	return 0;
}
