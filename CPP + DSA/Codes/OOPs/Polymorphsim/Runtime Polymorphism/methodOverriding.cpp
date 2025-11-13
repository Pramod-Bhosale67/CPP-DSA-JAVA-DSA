#include<iostream>
using namespace std;

// method overriding

// parent class
class Person{
public:

	void show(){
		cout << "this is the person\n";
	}
};

// child class
class Pramod: public Person{
	
public:
	void show(){
		cout << "this is the Pramod\n";
	}
};


int main(){

	Pramod pramod;
	pramod.show();
	




	return 0;
}