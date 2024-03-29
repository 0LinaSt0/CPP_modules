/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:30:47 by msalena           #+#    #+#             */
/*   Updated: 2022/02/02 18:54:36 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef	void (Karen::*status)(void);

void	Karen::complain( std::string level ){
	status	d = &Karen::debug;
	status	i = &Karen::info;
	status	w = &Karen::warning;
	status	statuses[] = { d, i, w, &Karen::error };
	int		int_arr[] = { level.compare("DEBUG"), level.compare("INFO"), level.compare("WARNING"), level.compare("ERROR")};
	int		iter = 0;

	while (iter < 4){
		if (!int_arr[iter]){
			break ;
		}
		iter++;
	}
	if (iter >= 4){
		std::cout << "Oyyyyy, please, give me valid argument" << std::endl;
		return ;
	}
	(this->*(statuses[iter]))();
}

void	Karen::debug( void ){
		std::cout << "DEBUG: " <<
			"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			<< std::endl;
}

void	Karen::info( void ){
		std::cout << "INFO: " <<
			"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			<< std::endl;
}

void	Karen::warning( void ){
		std::cout << "WARNING: " <<
			"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
			<< std::endl;
}

void	Karen::error( void ){
		std::cout << "ERROR: " <<
			"This is unacceptable! I want to speak to the manager now."
			<< std::endl;
}

