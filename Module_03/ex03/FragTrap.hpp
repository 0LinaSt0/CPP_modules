/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:10:29 by msalena           #+#    #+#             */
/*   Updated: 2022/02/06 20:30:41 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
private:
	std::string	name;
public:
	FragTrap( void );
	FragTrap( std::string& name, std::string& par_name );
	FragTrap( FragTrap& other );
	~FragTrap( void );

	void	attack( const std::string& target );
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void 	highFivesGuys(void);
} ;

#endif
