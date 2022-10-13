#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;
	// Swap;
	int temp = a;
	a = b;
	b = temp;
	
	cout << "a after Swap: " << a << endl;
	cout << "b after Swap: " << b << endl;
	
	return 0;
}
