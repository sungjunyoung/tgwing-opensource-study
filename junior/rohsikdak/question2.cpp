#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int y = 5;
	cout << "x : " << x << " | " << "y: " << y << " | ";
	cout << "x *= y: " << (x *= y);
	cout << " | x is now: " << x << endl;

	x = 10;

	cout << "x: " << x << " | " << "y: " << y << " | ";
	cout << "x /= y: " << (x /= y);
	cout << " | x is now: " << x << endl;

	x = 10;
	cout << "x : " << x << " | " << "y: " << y << " | ";
	cout << "x *= y: " << (x %= y);
	cout << " | x is now: " << x << endl;

	return 0;
}