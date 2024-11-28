#include <iostream>

using namespace std;

int main() {
	int grn, cop;
	cout << "Enter a grn: ";
	cin >> grn;
	cout << "Enter a cop: ";
	cin  >> cop;	
	grn = grn + cop / 100;
	cop = cop % 100;	
	cout << grn << " griven " << cop << " kopiyok";



	return 0;

}
