#include<iostream>
using namespace std;

// operator overloading
class Box{

private:
	int length;
	int width;

public:
	Box(int length, int width){

		this -> length = length;
		this -> width = width;
	}


	void show(){
		cout << "length of the box : " << length << "\n";
		cout << "width of the box : " << width << "\n";
	}
};	

int main(){

	Box rectangle1(10, 20);
	Box rectangle2(30, 40);

	// operand
	// operator

	// rectangle1 * rectangle2;
	// + - * / % = primitives data types

	// primitive data types = int, char, float, double, bool, long long

	int x = 10, y = 20;
	cout << (x + y) << "\n";
	cout << (x - y) << "\n";
	cout << (x * y) << "\n";











	return 0;
}