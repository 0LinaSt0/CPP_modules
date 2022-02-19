/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:25:26 by msalena           #+#    #+#             */
/*   Updated: 2022/02/19 17:55:57 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	Zombie*	_new = new Zombie ( name );
	if (!_new)
		return nullptr;

	_new->announce();
	return(_new);
}
