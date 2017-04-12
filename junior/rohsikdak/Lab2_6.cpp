#include<iostream>
using namespace std;

int main() {
	double a;
	cout << "Your measurement in inch: ";
	cin >> a;
	cout << a << " inch =  " << endl;
	
	int b = a / 12 * 10000;
	cout << b * 0.0001 << " foot" << endl;
	
	int c = a / 0.394 * 10000;
	cout << c * 0.0001 << "centimeter" << endl;
	
	int d = a / 36 * 10000;
	cout << d * 0.0001 << " yard" << endl;
	
	int e = a / 39.37 * 10000;
	cout << e * 0.0001 << " meter" << endl;
	
	return 0;
}