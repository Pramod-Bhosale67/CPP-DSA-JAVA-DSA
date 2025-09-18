
#include <iostream>

using namespace std;


// function defination
void swap(int x, int y){

	int temp = x;
	x = y;
	y = temp;
}


int main(){

	// two number to be swapped by using function
	// no return with argument

	int x, y;
	cin >> x >> y;

	cout << "Before Swaping\n";
	cout << x << " " << y;

	swap(x, y);

	cout << "\nAfter Swaping\n";
	cout << x << " " << y;

	cout << "\n";
	return 0;
}








