#include <iostream> 
using namespace std;
int main() {
	double radius;
	const double PI = 3.14;
	cout << "Enter radius of circle: ";
	cin >> radius;
	double area = radius * radius * PI;
	double perimeter = radius * 2 * PI;
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter;
	return 0;
}
