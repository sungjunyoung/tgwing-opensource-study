#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int x = 2, y = 3, z = 2;
	cout << x++ + y++ << endl;// cout<< x+y endl; x=3 y=4
	cout << ++x - --z << endl;// x=4; z=1; cout << x+y
	cout << --x + y++ << endl;// x=3; cout << x+y; y=5;
	cout << x-- + x-- - y-- << endl;// cout << x+ (x-1)-y; x=1; y=4;
	cout << x + y - --x + x++ - --y << endl;// cout << x+ y - (x-1) + (x-1) - (y-1); x=1 y=3
	return 0;
}

