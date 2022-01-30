/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:34:08 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 19:56:55 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include "Weapon.hpp"


class HumanB{
private:
	std::string	name;
	Weapon*		w;
public:
	HumanB( const std::string& came_name );
	~HumanB( void );
	void	setWeapon( Weapon& w_take );
	void	attack( void );
};

#endif
