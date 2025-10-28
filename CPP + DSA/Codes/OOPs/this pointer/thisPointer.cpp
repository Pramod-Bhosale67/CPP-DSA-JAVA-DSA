#include<iostream>
using namespace std;

class Person{

private:
	int age;
	string name;
	int marks;


public:

	// paratermized constructor
	Person(int age, string name, int marks){

		this -> age = age;
		this -> name = name;
		this -> marks = marks;
	}


	void showDetails(){
		cout << "Name of the person: " << name << "\n";
		cout << "Age of the person: " << age << "\n";
		cout << "Marks of the person: " << marks << "\n";
	}

};


int main(){


	Person pratiksha(21, "pratiksha", 50);

	pratiksha.showDetails();

	cout << "\n";


	return 0;
}