#include <iostream>

using namespace std;

int main() {
	
	cout << "enter the time in seconds since the start of the day." << endl;
	cout << "Enter the time in seconds: ";	
	int time;	
	cin >> time;
	cout << "The current time is " << time / 3600 << " hours, " << (time % 3600) / 60 << " minutes, and " << time % 60 << " seconds." << endl;	
	cout << "Count how many hours, minutes and seconds are left until midnight." << endl;	
	cout << "Hours left: " << (24 * 3600 - time) / 3600 << endl;	
	cout << "Minutes left: " << ((24 * 3600 - time) % 3600) / 60 << endl;	
	cout << "Seconds left: " << (24 * 3600 - time) % 60 << endl;	


	return 0;

}
