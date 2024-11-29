#include <iostream>

using namespace std;

int main() {
	
	cout << "Enter the time in seconds: ";	
	int time;	
	cin >> time;
	int hours = time / 60 / 60;	
	int result = 8 - hours;
	cout << "The time left is: " << result << " hours" << endl;	


	return 0;

}
