#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int x = 20, y = 45;
	cout <<" x : "  << x <<" y : "<< y << endl;
	x = x * y;
	cout << " x : " << x << " y : " << y << endl;
	x = x - y;
	cout << " x : " << x << " y : " << y << endl;
	y = y + 5;
	cout << " x : " << x << " y : " << y << endl;
	x = x * 10;
	cout << " x : " << x << " y : " << y << endl;
	y = x % y;
	cout << " x : " << x << " y : " << y << endl;
	return 0;
}