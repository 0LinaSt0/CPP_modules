/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:55:43 by msalena           #+#    #+#             */
/*   Updated: 2022/02/05 21:10:29 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap{
private:
	std::string	name;
	size_t		hitPoint;
	size_t		energyPoint;
	size_t		attackDamage;
public:
	ClapTrap( void );
	ClapTrap( std::string& name );
	ClapTrap( ClapTrap& other );
	~ClapTrap( void );

	ClapTrap&	operator=( ClapTrap& other );

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
} ;

#endif
