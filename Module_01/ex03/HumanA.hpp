/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:12:24 by msalena           #+#    #+#             */
/*   Updated: 2022/01/30 20:06:16 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define	HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
private:
	std::string	name;
	Weapon&	w;
public:
	HumanA(const std::string& came_name, Weapon& w_take);
	~HumanA( void );
	void	attack( void );
};
#endif
