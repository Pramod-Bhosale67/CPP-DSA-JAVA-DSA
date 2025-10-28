#include<iostream>
using namespace std;

class Person{

private:
	int age;
	string name;
	int marks;


public:
	Person(int ageOfPerson, string nm, int marksOfPerson){
		age = ageOfPerson;
		name = nm;
		marks = marksOfPerson;

		cout << "I'm in the constructor\n"; 
	}


	void showDetails(){
		cout << "Name of the person: " << name << "\n";
		cout << "Age of the person: " << age << "\n";
		cout << "Marks of the person: " << marks << "\n";
	}

};


int main(){

	// enter the details of the sahil
	Person sahil(20, "Sahil", 40); // obj of sahil
	sahil.showDetails();

	cout << "\n";

	Person prachi(21, "Prachi", 45);
	prachi.showDetails();

	cout << "\n";

	Person pranjal(21, "Pranjal", 60);
	pranjal.showDetails();

	cout << "\n";


	return 0;
}