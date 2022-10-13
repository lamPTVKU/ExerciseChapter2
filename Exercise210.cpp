#include <iostream>
using namespace std;
int main() {
	int hours, minutes;
	cout << "Enter hours: ";
	cin >> hours;
	cout << "Enter minutes: ";
	cin >> minutes;
	int numberOfMinutes = hours * 60 + minutes;
	cout << "Number of minutes: " << numberOfMinutes;
	return 0;
}
