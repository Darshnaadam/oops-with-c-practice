#include <iostream>
using namespace std;

int main(){
	int percent;
	cout << "Enter Percentage: ";
	cin >> percent;
	
	try
	{
		if (percent < 0 || percent > 100)
		throw (percent);
		
		else
			cout << endl << "Your Percentage is : " << percent;
	}
	
	catch (int p)
	{
		cout << endl << "Invalid percentage: " <<p;
	}
	
}
