/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:27:04 by msalena           #+#    #+#             */
/*   Updated: 2022/02/02 19:43:48 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen;

typedef	void (Karen::*status)(void);

class Karen{
private:
	status	statuses[4];
	
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	int	iter;

	void complain( std::string level );
	void getMethods( void );
};

#endif
