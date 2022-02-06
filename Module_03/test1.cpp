/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:35:11 by msalena           #+#    #+#             */
/*   Updated: 2022/02/06 13:14:26 by msalena          ###   ########.fr       */
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

	void print_me(){
		cout << this << endl;
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
};

class First : virtual public Parent{
public:
	First(){
		cout << "First constructor" << endl;
	}

	~First(){
		cout << "First destructor" << endl;
	}

	void print_parent(){
		cout << "First: " << this << "; ";
		print_me();
		cout << endl;
	}
};

class Second : virtual public Parent{
public:
	Second(){
		cout << "Second constructor" << endl;
	}

	~Second(){
		cout << "Second destructor" << endl;
	}

	void print_parent(){
		cout << "Second: " << this << "; ";
		Parent::print_me();
		cout << endl;
	}
};

class Diamond : public First, public Second{
public:
	Diamond(){
		cout << "Diamond constructor" << endl;
	}
	~Diamond(){
		cout << "Diamond destructor" << endl;
	}

	void print_parents(){
		First::print_parent();
		Second::print_parent();
	}
};


class Abstr{
public:
	Abstr() = default;
	virtual ~Abstr() = default;

	virtual void print_smth() = 0;

};

class Abstr_child : public Abstr {
public:
	void print_smth() {
		cout << "yeeee" << endl;
	}
};

int main(){
	{
		Diamond d;
		cout << "\t=-=-=-=-=-=-=-=-=-=" << endl;
		d.print_parents();
		cout << "\t=-=-=-=-=-=-=-=-=-=" << endl;
	}

	{
		Abstr_child a;
		a.print_smth();
	}
}
