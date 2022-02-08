/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polina <polina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:10:29 by msalena           #+#    #+#             */
/*   Updated: 2022/02/08 15:57:51 by polina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
private:
	std::string	name;

	void	setAttrib(const std::string& name);
protected:
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
