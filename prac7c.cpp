#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char s[20];
	cout << "Enter your name: ";
	cin >> setw(10) >>s;
	cout << endl << s;
}
