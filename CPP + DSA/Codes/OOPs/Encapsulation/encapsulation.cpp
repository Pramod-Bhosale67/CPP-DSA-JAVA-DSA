#include<iostream>
using namespace std;

class Area{
private:
	int side;
	int radius;

public:
	Area(int side, int radius){
		this -> side = side;
		this -> radius = radius;
	}

	int calculateAreaOfCircle(){
		return radius * radius;
	} 

	void calculateAreaOfSquare(){
		int sq = side * side;
		cout << sq << "\n";
	}

	int calculateAreaOfRectange(int breadth){

		return (side * breadth);
	}
};



int main(){


	Area circle(2, 6);
	cout << circle.calculateAreaOfCircle() << "\n";

	// Area rect(5, 1);
	// cout << rect.calculateAreaOfRectange(20);

	cout << "\n";


	return 0;
}