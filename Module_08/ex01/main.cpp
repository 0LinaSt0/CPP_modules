/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:06:01 by msalena           #+#    #+#             */
/*   Updated: 2022/04/10 12:40:50 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int	main(void){
	
	try{
		{
			Span sp = Span(10);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			
			std::vector<int>	added(5);
			added[0] = 5;
			added[1] = 126;
			added[2] = 39;
			added[3] = 22;
			added[4] = 7;
			
			sp.addNumbers(added);
			
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		std::cout <<std::endl;
		{
			Span	sp(11000);

			for (int i = 0; i < 10000; i++){
				sp.addNumber(i+1);
			}
			std::vector<int>	added(1000);
			for (int i = 0; i < 1000; i++){
				added[i] = 10001 + i;
			}
			sp.addNumbers(added);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		
	} catch (std::exception& ex){
		std::cout << "Error" << std::endl;
	}
}