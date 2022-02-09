/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:09:39 by msalena           #+#    #+#             */
/*   Updated: 2022/02/09 14:10:11 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal{
private:
	Brain*	CatBrain;
protected:
	std::string	type;

	void	setType( const std::string& type);
public:
	Cat( void );
	Cat( const std::string& type, const std::string& a_type );
	Cat( const Cat& other );
	~Cat( void );

	Cat&	operator=( const Cat& other );

	std::string	getType( void ) const;
	void	makeSound( void ) const;
} ;

#endif
