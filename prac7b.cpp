#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str="Hello, its going to reverse";
	reverse(str.begin(), str.end());
	cout << str;
	string s1 = "Darshna";
	string s2 = "Adam";
	if (s1>s2)
	
		cout << endl << s1 << " comes before "<< s2;
    
    else
		cout << s2 << "comes before "<< s1;
	
}
