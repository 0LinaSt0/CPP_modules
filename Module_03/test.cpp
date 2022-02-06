/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:35:11 by msalena           #+#    #+#             */
/*   Updated: 2022/02/06 18:46:35 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

class Parent{
public:
	Parent(){
		cout << "Parent constructor" << endl;
		a = 1;
	}
	Parent(int a){
		cout << "Parent int constructor" << endl;
		this->a = a;
	}
	~Parent(){
		cout << "Parent destructor" << endl;
	}

	int get_a(){
		return a;
	}

	virtual void useless_one(){
		cout << "Parent" << endl;
	}

private:
	int a;

	void print(){
		cout << a << endl;
	}

protected:
	void protected_stuff(){
		cout << "AAAAA" << endl;
	}

};

class Child : public Parent{
public:
	Child() : Parent(123){
		cout << "Child constructor" << endl;
	}

	~Child(){
		cout << "Child destructor" << endl;
	}

	void getProt( void ){
		protected_stuff();
	}

	void useless_one(){
		cout << "Child" << endl;
	}
	void	aaaa(){
		std::cout << "aaaaa" << std::endl;
	}
};


int main(){
	Parent* smth = new Child();

	smth->useless_one();

	delete smth;
}
