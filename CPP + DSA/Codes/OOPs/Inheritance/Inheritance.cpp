#include<iostream>
using namespace std;



// Base class
class Person{
public:

	int age;
	string name;
	int marks;
};

// Derived Class
class Sahil: public Person{

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

class Prachi: public Person{

public:
	Prachi(){
		name = "Prachi";
		age = 20;
		marks = 60;
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

	Prachi prachi;
	prachi.showDetails();
	

	cout << "\n";


	return 0;
}