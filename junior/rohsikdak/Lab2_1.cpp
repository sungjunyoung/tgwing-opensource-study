#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cout << "Enter two integer numbers: ";
	int a, b;
	cin >> a >> b;
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	float c = a;
	float d = b;
	cout << c << " / " << d << " = " << c / d << endl;
	cout << a << " % " << b << " = " << a % b << endl;
	return 0;
}