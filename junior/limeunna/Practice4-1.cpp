#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	double a;
	cout << "Enter a floating number: ";
	cin >> a;
	cout << "Absolute value: " << abs(a) << endl;
	cout << "Ceiling value: " << ceil(a) << endl;
	cout << "Floor value: " << floor(a) << endl;
	cout << "Square root value: " << sqrt(a) << endl;
	return 0;
}