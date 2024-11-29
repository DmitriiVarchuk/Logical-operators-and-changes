#include <iostream>

using namespace std;

int main() {
	
	cout << "Payments vary between settlements." << endl;
	cout << "Enter your business details: " << endl;	
	cout << "Map scale (number of kilometers in one centimeter) -> ";	
	double scale;	
	cin >> scale;	
	cout << "Stand between the dots that represent populated areas (cm) ->  ";	
	double distance;	
	cin >> distance;	
	cout << "The distance between settlements is " << distance * scale << " km." << endl;	


	return 0;

}
