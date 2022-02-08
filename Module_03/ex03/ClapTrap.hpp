/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polina <polina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:52:43 by msalena           #+#    #+#             */
/*   Updated: 2022/02/08 16:36:18 by polina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
	void	setAttrib(const std::string& name);
protected:
	std::string	name;
	size_t		hitPoint;
	size_t		energyPoint;
	size_t		attackDamage;
public:
	ClapTrap( void );
	ClapTrap( const std::string& name);
	ClapTrap( const ClapTrap& other );
	~ClapTrap( void );

	ClapTrap&	operator=( const ClapTrap& other );

	void	attack( const std::string& target );
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printInfo( void );
} ;

#endif
