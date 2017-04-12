#include<iostream>
using namespace std;

int main() {
	cout << "Your input: ";
	int a;
	cin >> a;
	int b = a % 10;
	int c = (a / 10) % 10;
	int d = (a / 100) % 10;
	int e = (a / 1000) % 10;
	cout << "Reversed output: " << b << c << d << e;
	return 0;
}