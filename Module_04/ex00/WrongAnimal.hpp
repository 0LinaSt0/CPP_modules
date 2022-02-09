/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:09:15 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 13:02:10 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal{
private:

protected:
	std::string	type;

	void		setType( const std::string& type );
public:
	WrongAnimal( void );
	WrongAnimal( const std::string& type );
	WrongAnimal( const WrongAnimal& other );
	~WrongAnimal( void );

	WrongAnimal&	operator=( const WrongAnimal& othrer );

	std::string	getType( void ) const;
	void		makeSound( void ) const;

} ;

#endif
