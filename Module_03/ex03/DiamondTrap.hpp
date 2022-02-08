/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polina <polina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:34:31 by polina            #+#    #+#             */
/*   Updated: 2022/02/08 16:33:37 by polina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap{
private:
	std::string	name;

	void	setAttrib( const std::string& name );
public:
	DiamondTrap( void );
	DiamondTrap( const std::string& name, 
				const std::string& ScavName,
				const std::string& FragName );
	DiamondTrap( const DiamondTrap& other );
	~DiamondTrap( void );
	
	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	whoAmI( void );
} ;

#endif