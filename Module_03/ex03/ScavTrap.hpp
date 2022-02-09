/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:39:36 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 10:15:36 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
private:
	void	setAttrib(const std::string& name);
protected:
	std::string	name;
	size_t		hitPoint;
	size_t		energyPoint;
	size_t		attackDamage;
public:
	ScavTrap( void );
	ScavTrap( const std::string& name );
	ScavTrap( const ScavTrap& other );
	~ScavTrap( void );

	void	attack( const std::string& target );
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	guardGate( void );
} ;

#endif
