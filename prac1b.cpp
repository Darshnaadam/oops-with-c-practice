#include <iostream>
using namespace std;

class student{
	char name[20];
	int age;
	float percentage;
	
	void getData(){
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Age: ";
		cin >> age;
		cout << "Enter percentage: ";
		cin >> percentage;
		
	}
	
	public:
		void displayData(){
			getData();
			cout << "\t STUDENT INFORMATION: \n";
			cout << " \t";
			cout << endl << "Name of the Student: " << name << endl;
			cout << "Age of the Student: " << age << endl;
			cout << "Percentage of the Student: " << percentage << endl;
			
		}
};

int main(){
	student s;
	s.displayData();
}
