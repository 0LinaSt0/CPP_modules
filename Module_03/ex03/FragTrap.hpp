/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:10:29 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 10:15:44 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
private:
	void	setAttrib(const std::string& name);
protected:
	std::string	name;
	size_t		hitPoint;
	size_t		energyPoint;
	size_t		attackDamage;
public:
	FragTrap( void );
	FragTrap( const std::string& name );
	FragTrap( const FragTrap& other );
	~FragTrap( void );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void 	highFivesGuys(void);
} ;

#endif
