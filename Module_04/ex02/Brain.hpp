/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:28:27 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 13:49:55 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAING_HPP
#define BRAING_HPP

#include <iostream>
#include <string>

class	Brain{
private:
	void	setIdeas( const std::string& idea );
protected:
	std::string	ideas[100];
public:
	Brain( void );
	Brain( const std::string& idea );
	Brain( const Brain& other );
	~Brain( void );

	Brain&	operator=( const Brain& other );
	std::string* getIdeas( void );
} ;

#endif
