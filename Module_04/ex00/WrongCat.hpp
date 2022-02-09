/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:09:39 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 13:01:58 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal{
private:

protected:
	std::string	type;

	void	setType( const std::string& type);
public:
	WrongCat( void );
	WrongCat( const std::string& type, const std::string& a_type );
	WrongCat( const WrongCat& other );
	~WrongCat( void );

	std::string	getType( void ) const;
	void	makeSound( void ) const;
} ;

#endif
