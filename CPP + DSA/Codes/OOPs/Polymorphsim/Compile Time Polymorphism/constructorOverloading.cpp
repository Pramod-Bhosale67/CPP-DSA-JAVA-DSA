#include<iostream>
using namespace std;

// constructor overloading

class Person{
private:		
	int age;
	string name;

public:
	Person(){
		age = 10;
		name = "Pranjal";

		cout << "Im in the Default constructor with no parameters\n";
	}

	Person(int age){
		name = "Eshita";
		this -> age = age;

		cout << "Im in the  constructor with 1 parameters\n";
	}

	Person (int age, string name){
		this -> age = age;
		this -> name = name;

		cout << "Im in the  constructor with 2 parameters\n";
	}

	void show(){
		cout <<"name of the person: " << name << "\n";
		cout <<"age of the person: " << age << "\n";
	}
};

int main(){

	// Person pramod;
	// pramod.show();

	// Person eshita(20);
	// eshita.show();

	Person vrushali(20, "Vrushali");
	vrushali.show();












	return 0;
}