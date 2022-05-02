#include <iostream>
using namespace std;

class student {
	char name[20];
	int age;
	float percentage;
	public:
		void getData();
		void show();
};

void student :: getData(){
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter Percnetage: ";
	cin >> percentage;
}

void student :: show(){
	cout << endl << "Name: " << name;
	cout << endl << "Age: " << age;
	cout << endl << "Percentage: " << percentage;
	
}

int main(){
	student studobj;
	studobj.getData();
	studobj.show();
}
