#include <iostream>

int main(){
	int grade;
	
	std::cout << "Enter the grade\n";
	std::cin >> grade;
	if(grade > 35){
		std::cout << "pass\n";
	}
	else{
		std::cout << "Fail\n";
	}
}
