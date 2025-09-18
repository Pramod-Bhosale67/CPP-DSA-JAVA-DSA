
#include <iostream>

using namespace std;


void callByValues(int x){
	x = x + 10;
}

void callByReference(int &y){

	y = y + 100;
}

int main(){

	// call by value & call by reference

	int x = 90;

	cout << "Value of x before calling the function: " << x << "\n";
	callByValues(x);
	cout << "Value of x After calling the function: " << x << "\n";

	int y = 100;

	cout << "Value of Y before calling the function: " << y << "\n";
	callByReference(y);
	cout << "Value of Y After calling the function: " << y << "\n";


	cout << "\n";
	return 0;
}








