#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fread("c:/Demo.txt");
	int wc=1, lc=1;
	char c;
	while(fread){
		fread.get(c);
		if(c==' ')
		{
			wc++;
		}
		if(c=='\n'){
			lc++;
		}
	}
	fread.close();
	cout<<"\n Total no. of words in the file: "<<wc;
	cout<<"\n Total no. of lines in the file: "<<lc;
}
