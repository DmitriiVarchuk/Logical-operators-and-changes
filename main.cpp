#include <iostream>

using namespace std;

int main() {

	const string reset = "\033[0m";
	const string purple = "\033[35m";

	int year;	
	cout << "Enter a year: ";	
	cin >> year;	
	int days = 365 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));	
	cout << "In " << purple << year << reset <<" year = " << purple << days << reset << " days." << endl;	
	return 0;

}
