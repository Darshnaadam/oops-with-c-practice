#include <iostream>
using namespace std;

int main(){
	string s;
	cout << "Enter the name of your Course: ";
	cin >> s;
	
	try{
		if(s=="BSC-IT" || s=="BMS" || s=="B.COM")
			cout << endl << "Your chosen course is: " << s;
			else 
			throw (s);
	}
	
	catch (string ss)
	{
		cout << endl << "Ooho!, this Course is not available";
	}
	
}
