#include <exception>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cls{
public:
	void a();
};

void Cls::a(){

}

void is_one(int a){
	if (a == 1){
		throw out_of_range("This is one!");
	} else if (a == 2){
		throw out_of_range("This is two!");
	}
}

int main(){
	try{
		is_one(2);
	} catch (exception& e){
		// cout << e.what() << endl;
	}
}
