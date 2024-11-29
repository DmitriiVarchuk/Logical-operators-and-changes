#include <iostream>

using namespace std;

int main() {
	
	cout << "calculating the volume of a sphere." << endl;
	cout << "Enter the radius of the sphere: ";	
	double radius;	
	cin >> radius;	
	double volume = (4.0 / 3.0) * 3.14159 * radius;	
	cout << "The volume of the sphere is: " << volume << endl;	

	return 0;

}
