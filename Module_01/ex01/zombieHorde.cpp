/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:09:49 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 16:13:15 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie*	_new = new Zombie[N];

	for(int i = 0; i < N; i++){
		_new[i].setName(name);
		_new[i].announce();
	}
	return (_new);
}
