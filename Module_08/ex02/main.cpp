/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:36:23 by msalena           #+#    #+#             */
/*   Updated: 2022/04/10 18:57:01 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main(void){
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << std::endl
			<< "Top elem: "
			<< mstack.top() 
			<< std::endl << std::endl;

	mstack.pop(); //removes the top element

	std::cout << "Size of stack: "
			<< mstack.size() 
			<< std::endl << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << "elem: "
				<< *it 
				<< std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	{
		std::cout << "\n-->LIST EXAMPLE:" << std::endl;
		
		std::list<int> mstack;
		
		mstack.push_back(5);
		mstack.push_back(17);

		mstack.pop_back(); //removes the top element

		std::cout << "Size of stack: "
				<< mstack.size()
				<< std::endl << std::endl;
		
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(12);
		mstack.push_back(0);
		
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << "elem: "
					<< *it 
					<< std::endl;
			++it;
		}
	}
}