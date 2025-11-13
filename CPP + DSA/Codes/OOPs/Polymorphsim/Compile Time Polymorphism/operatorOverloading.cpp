#include<iostream>
using namespace std;

// operator overloading
class Box{

public:
	int length;
	int width;

public:
	// parameterised constructor
	Box(int length, int width){

		this -> length = length;
		this -> width = width;
	}


	// method
	void show(){
		cout << "length of the box : " << length << "\n";
		cout << "width of the box : " << width << "\n";
	}

	Box operator +(Box rect2){

		int newLenght = length + rect2.length;	

		int newWidth = width + rect2.width;

		Box ans(newLenght, newWidth);

		return ans;
	}

};	

int main(){

	Box rect1(10, 20); // L = 10 W = 20
	Box rect2(30, 40); // L = 30 W = 40


	// cout << rect1.length << " " << rect1.width << "\n";
	// cout << rect2.length << " " << rect2.width << "\n";

	// L = 40 W = 60
	Box ans = rect1 + rect2;
	cout << ans.length << " " << ans.width << "\n";



	// add this
	




	return 0;
}