/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:31:06 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 20:09:16 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
public:
	Weapon(const std::string& str);
	~Weapon( void );
	const std::string& getType();
	void	setType(const std::string& str);

private:
	std::string type;
};

#endif
