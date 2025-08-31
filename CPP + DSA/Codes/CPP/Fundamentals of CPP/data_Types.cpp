// header file
#include <iostream>

// namespace
using namespace std;


int main(){

	// operator to find the size of data type
	// sizeof(variable Name)


	// int : mainly stores the integer values
	int num = 10;
	cout << "Value of integer: " << num << "\n";
	cout << "Size of Integer: " << sizeof(num) << " Bytes\n\n";

	// char : mainly stores the char values in single quote
	char ch;
	cout << "Value of Char: " << ch << "\n";
	cout << "Size of Char: " << sizeof(ch) << " Bytes\n\n";

	// bool : mainly stores the boolean values like true (1) or false (0)
	bool flag;
	cout << "Value of boolean: " << flag << "\n";
	cout << "Size of boolean: " << sizeof(flag) << " Bytes\n\n";

	// float / double : mainly stores the decimal values like 10.3, 90.893
	float f = 10.56;
	double d = 90.90023;
	cout << "Value of float: " << f << "\n";
	cout << "Size of float: " << sizeof(f) << " Bytes\n\n";

	cout << "Value of Double: " << d << "\n";
	cout << "Size of Double: " << sizeof(d) << " Bytes\n\n";


	
	return 0;
}








