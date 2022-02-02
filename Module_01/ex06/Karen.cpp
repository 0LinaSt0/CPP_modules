/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:30:47 by msalena           #+#    #+#             */
/*   Updated: 2022/02/02 19:44:14 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef	void (Karen::*status)(void);

void	Karen::getMethods( void ){

	(this->*(statuses[this->iter]))();
}

void	Karen::complain( std::string level ){
	this->statuses[0] = &Karen::debug;
	this->statuses[1] = &Karen::info;
	this->statuses[2] = &Karen::warning;
	this->statuses[3] = &Karen::error;
	int		int_arr[] = { level.compare("DEBUG"), level.compare("INFO"), level.compare("WARNING"), level.compare("ERROR")};
	this->iter = 0;

	while (this->iter < 4){
		if (!int_arr[this->iter]){
			break ;
		}
		(this->iter)++;
	}
	if (this->iter >= 4){
		std::cout << std::endl << "[ Probably complaining about insignificant problems ]"
					<< std::endl << std::endl;
		return ;
	}
}

void	Karen::debug( void ){
		std::cout << "[ DEBUG ]" << std::endl <<
			"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			<< std::endl << std::endl;
}

void	Karen::info( void ){
		std::cout << "[ INFO ]" << std::endl <<
			"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			<< std::endl << std::endl;
}

void	Karen::warning( void ){
		std::cout << "[ WARNING ]" << std::endl <<
			"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
			<< std::endl << std::endl;
}

void	Karen::error( void ){
		std::cout << "[ ERROR ]" << std::endl <<
			"This is unacceptable! I want to speak to the manager now."
			<< std::endl << std::endl;
}

