/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:39:36 by msalena           #+#    #+#             */
/*   Updated: 2022/02/06 20:46:25 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
	std::string	name;
public:
	ScavTrap( void );
	ScavTrap( std::string& name, std::string& par_name );
	ScavTrap( ScavTrap& other );
	~ScavTrap( void );

	void	attack( const std::string& target );
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	guardGate( void );
} ;

#endif
