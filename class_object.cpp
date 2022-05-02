#include <iostream>
using namespace std;

class Car{
	public:
		string Name;
		string Colour;
		int price;
};
int main(){
	Car TATA_motors;
	TATA_motors.Name = "Tata motors";
	TATA_motors.Colour = "Red";
	TATA_motors.price = 5000000;
	
	
	Car BMW;
	BMW.Name = "BMW";
	BMW.Colour = "White";
	BMW.price = 60000000;
	
	cout << "Name of the car is: " << TATA_motors.Name << endl;
	cout << "Colour of the car is: " << TATA_motors.Colour << endl;
	cout << "Price of the car is: " << TATA_motors.price << endl << endl;
	
	cout << "Name of the car is: " << BMW.Name << endl;
	cout << "Colour of the car is: " << BMW.Colour << endl;
	cout << "Price of the car is: " <<BMW.price << endl;
	
}
