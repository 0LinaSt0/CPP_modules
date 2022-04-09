/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 12:56:29 by msalena           #+#    #+#             */
/*   Updated: 2022/04/09 14:40:37 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <class T>
int	easyfind(T& contan, int elem){
	std::vector<int>::iterator	iter;
	int					index = 0;

	iter = std::find(contan.begin(), contan.end(), elem);
	if (iter == contan.end())
		throw std::exception();
	index = iter - contan.begin();
	return (index);
}