#include<iostream>
using namespace std;

// mainly adds two numbers of different types
class Math{

public:

	// add two int
	void add(int a, int b){

		int ans = a + b;
		cout << ans << "\n";
	}

	// add two float
	void add(double a, double b){

		double ans = a + b;
		cout << ans << "\n";
	}

	// this will not work - since we already have similar function 
	// with same parameters.
	int add(int c, int d){

		return (c + d);
	}

};


int main(){

	Math math;
	math.add(10, 20);
	math.add(10.5, 20.5);
	int ans =  math.add(100, 300);
	cout << ans << "\n";










	return 0;
}