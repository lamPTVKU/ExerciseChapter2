#include <iostream>
using namespace std;
int main() {
	double angle1, angle2;
	cout << "Enter Angle First: ";
	cin >> angle1;
	cout << "Enter Angle Second: ";
	cin >> angle2;
	
	const double sumAngle = 180;
	double angle3 = sumAngle - angle1 - angle2;
	cout << "Angle Third: " << angle3;	
}
