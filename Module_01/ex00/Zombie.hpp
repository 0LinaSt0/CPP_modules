/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:58:21 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 21:11:35 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class	Zombie{
	private:
		std::string		name;
		static size_t	color_fl;
	public:
		Zombie ( void );
		Zombie( std::string name );
		~Zombie( void );
		void 	announce( void );
		void	setName( std::string name );
		void	color( void );
};

Zombie* newZombie( std::string name );

void 	randomChump( std::string name );
#endif
