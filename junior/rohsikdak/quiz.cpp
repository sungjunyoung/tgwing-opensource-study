#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main() {
	const double pi = 3.141592;
	int r;
	cout << "Enter radius: ";
	cin >> r;
	cout << fixed;
	cout << setprecision(3);
	cout << "Volume: " << (4 * pi * (r^3))/3 << endl;
	cout << "Surface area: " << (4 * pi*r*r) << endl;
	

	return 0;

}
