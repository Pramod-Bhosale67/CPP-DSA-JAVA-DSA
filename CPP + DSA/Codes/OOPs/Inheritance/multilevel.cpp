#include<iostream>
using namespace std;

// multi-level inheritance


// Base class
class Animal{

protected:
	string sound;
};


// Derived class
class Dog: protected Animal{
protected:	
	int age;
	string breed;
};



// Derived class
class GoldenRritriver: protected Dog{
protected:
	string color;

public:	
	GoldenRritriver(){
		sound = "Barking";
		age = 3;
		breed = "GoldenRritriver";
		color = "Golden";
	}

	void showAnimalDetails(){
		cout << "sound of the Animal: " << sound << "\n";
		cout << "age of the Animal: " << age << "\n";
		cout << "color of the Animal: " << color << "\n";
		cout << "Breed of the Animal: " << breed << "\n";
	}

};


int main(){

	GoldenRritriver goldenRritriver;
	goldenRritriver.showAnimalDetails();

	cout << "\n";


	return 0;
}