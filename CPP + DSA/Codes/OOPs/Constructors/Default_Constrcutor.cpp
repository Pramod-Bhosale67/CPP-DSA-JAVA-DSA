#include<iostream>
using namespace std;

class Person{

private:
	int age;
	string name;
	int marks;
	string address;
	string phone;

public:
	Person(){
		age = 20;
		name = "Sahil";
		marks = 50;
		address = "ACBCD";
		phone = "999988898";
		cout << "I'm in the constructor\n"; 
	}


	void showDetails(){
		cout << "Name of the person: " << name << "\n";
		cout << "Age of the person: " << age << "\n";
		cout << "Marks of the person: " << marks << "\n";
		cout << "Address of the person: " << address << "\n";
		cout << "Phone of the person: " << phone << "\n";
	}

};


int main(){

	// enter the details of the sahil
	Person sahil; // obj of sahil
	sahil.showDetails();

	cout << "\n";

	Person prachi;
	prachi.showDetails();

	cout << "\n";

	Person pranjal;
	pranjal.showDetails();

	cout << "\n";


	return 0;
}