#include <iostream> 
using namespace std;
int main() {
	double height, width;
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter width: ";
	cin >> width;
	double perimeter = (height + width) * 2;
	double area = width * height;
	cout << "Perimeter: " << perimeter << endl;
	cout << "Area: " << area;
	return 0;
}
