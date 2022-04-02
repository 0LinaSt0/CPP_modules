#include <iostream>
#include <string>
#include <memory>
#include <stdexcept>
#include <exception>

class Parent{
	double a;
	double b;
public:
	double getB();
};
class Child : public Parent{
};
class a : public Child{};

int main(){
	// explicit valid data type cast
	{
		double a = 123.123;
		int b = static_cast<int>(a);
	}
	// for inheritance classes. It's casting class to class 
	//			down the inheritance hieratchy
	{
		a c;
		Parent* p = new Child;
		Parent& p1 = dynamic_cast<Parent&>(c);
	}
	// ptrs -> ptrs; ptrs -> int; int -> ptrs
	{
		std::string* c;
		int i = 123456;
		printf("%p|\n", &c);
		printf("%p|\n", &i);
	}
}
