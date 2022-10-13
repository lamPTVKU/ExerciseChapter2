#include <iostream>
using namespace std;
int main() {
	int numberOfYear;
	cout << "Enter number of year: ";
	cin >> numberOfYear;
	int year = numberOfYear / 365;
	int month = (numberOfYear - (year * 365) ) / 30;
	int day  = (numberOfYear - (year * 365) -(month * 30));
	cout << "Year: " << year << endl;
	cout << "Month: " << month << endl;
	cout << "Day: " << day;
	return 0;
}
