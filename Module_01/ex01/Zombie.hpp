/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:58:21 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 16:08:07 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class	Zombie{
	private:
		std::string		name;
		static size_t	N_zombe;
	public:
		Zombie ( void );
		~Zombie( void );
		void 	announce( void );
		void	setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );
