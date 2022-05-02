#include <iostream>
using namespace std;

class employee{
	char name[20];
	int age;
	float basic_salary;
	
	void getInfo(){
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter age: ";
		cin >> age;
		cout << "Enter basic salary: ";
		cin  >> basic_salary;
	}
	
	public:
		void displayInfo(){
			getInfo();
			cout << endl << " \tEMPLOYEE INFORMATION\n";
			cout << "\t--------------------------- ";
			cout << endl <<"Name: "<<name;
			cout << endl <<"Age: "<<age;
			cout << endl <<"Basic salary: "<<basic_salary;
			cout << endl <<"Gross salary: "<<basic_salary + (0.6*basic_salary)+(0.4*basic_salary);
		}
};

int main(){
	employee e;
	e.displayInfo();
}
