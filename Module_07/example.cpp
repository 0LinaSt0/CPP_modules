/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:06:57 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 20:50:37 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>

class Cls{
public:
	Cls(){ a = 123; }
	int a;
};
std::ostream& operator<<(std::ostream& out, const Cls& cls){
	return out << cls.a;
}

template <typename T>
void func(T* a){
	std::cout << *a << std::endl;
}

template <typename T>
class Template{
public:
	T value;
	Template(const T& value) : value(value) {}
};
template <typename T>
std::ostream& operator<<(std::ostream& out, const Template<T>& temp){
	return out << temp.value;
}


int main (void){
	std::vector<int> v;
	//ABOUT_LINKS
	{
		int a = 123;
		int b = 234;
		std::cout 
			<< "a: " << &a << std::endl
			<< "b: " << &b << std::endl;

		int* ptr = &a;
		int& ref = a;
		ref = b; // a = b

		std::cout << "ref: " << &ref << std::endl;

		std::cout 
			<< "a = " << a << std::endl
			<< "b = " << b << std::endl;

		exit(0);	
	}

	//ABOUT_VECTOR_METHODS
	{
		// std::cout 
		// 	<< v.size() << std::endl
		// 	<< v.capacity() << std::endl;
		// v.push_back(1);
		// std::cout 
		// 	<< v.size() << std::endl
		// 	<< v.capacity() << std::endl;
		// v.push_back(2);
		// v.push_back(2);
		// v.push_back(2);
		// v.push_back(2);
		// std::cout 
		// 	<< v.size() << std::endl
		// 	<< v.capacity() << std::endl;
	}

	//ABOUT__VECTOR_ITERATION
	{
		for (int i = 0; i < 10; i++) v.push_back(i);

		for (size_t i = 0; i < v.size(); i++){
			std::cout << v.at(i) << " " << v[i] << std::endl;
		}
		
		std::vector<int>::iterator it;
		for (it = v.begin(); it != v.end(); it++){
			std::cout << *it << " ";
			*it = *it + 1;
			std::cout << *it << std::endl;
		}
	}
	
	//ABOUT_TEMPLATE_CLASSES
	{	
		// Template<int> t(123);
		// Template<std::string> t1("asdkj");
		// std::cout << t << std::endl;
		// std::cout << t1 << std::endl;
	}
	
}