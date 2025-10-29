#include<iostream>
using namespace std;


// Single Inheritance


// Base class
class Person{
protected:

	int age;
	string name;
	int marks;
};

// Derived Class
class Sahil: protected Person{

public:
	Sahil(){
		name = "Sahil";
		age = 21;
		marks = 50;
	}

	void showDetails(){
		cout << "Name of the person: " << name << "\n";
		cout << "Age of the person: " << age << "\n";
		cout << "Marks of the person: " << marks << "\n";
	}
};



int main(){

	Sahil sahil;

	sahil.showDetails();


	cout << "\n";


	return 0;
}