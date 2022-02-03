/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:42:59 by msalena           #+#    #+#             */
/*   Updated: 2022/02/03 12:55:39 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Cls{
private:
	int a;

public:
	Cls() = default;
	Cls(const Cls& another){
		this->a = another.a;
	}

	Cls& operator=(const Cls& another){
		this->a = another.a;
		return *this;
	}

	int get_a() const {
		return a;
	}

	void set_a(int a){
		this->a = a;
	}
};

bool operator==(const Cls& left, const Cls& right){
	return (left.get_a() == right.get_a());
}

int main(){
	Cls a, b;
	a.set_a(1);
	b.set_a(2);
	std::cout << (a == b) << std::endl;

	a = b;
	std::cout << (a == b) << std::endl;
}
