/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:12:29 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 21:15:18 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int	main(void){
	std::string	strArr[] = { "I", "so", "love", "template" };
	int			intArr[] = { 123, 5, 89};
	char		charArr[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
	
	std::cout << "\nLet's printing strArr:" << std::endl;
	iter(strArr, 4, f);

	std::cout << "\nLet's printing intArr:" << std::endl;
	iter(intArr, 3, f);

	std::cout << "\nLet's printing charArr:" << std::endl;
	iter(charArr, 9, f);
}