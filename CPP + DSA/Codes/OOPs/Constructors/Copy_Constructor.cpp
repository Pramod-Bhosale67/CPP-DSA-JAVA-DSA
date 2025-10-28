#include<iostream>
using namespace std;

class Person{

private:
	int age;
	string name;
	int marks;


public:
	// default constructor
	Person(){
		age = 12;
		name = "Pramod";
		marks = 40;
		
	}

	// paratermized constructor
	Person(int ageOfPerson, string nm, int marksOfPerson){
		age = ageOfPerson;
		name = nm;
		marks = marksOfPerson;

		cout << "I'm in the parameterized constructor\n"; 
	}

	// copy construtor
	Person(Person &prachi){
		age = prachi.age;
		name = prachi.name;
		marks = prachi.marks;
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

	// copy constrcutor;


	// Person pratiksha = prachi;
	Person pratiksha(prachi);

	pratiksha.showDetails();

	cout << "\n";


	return 0;
}