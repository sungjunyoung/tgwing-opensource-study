#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a, b, c, d, e;
	cout << "How many apples did you buy: ";
	cin >> a;
	cout << "How many bananas did you buy: ";
	cin >> b;
	cout << "How many peaches did you buy: ";
	cin >> c;
	cout << "How many grapes did you buy: ";
	cin >> d;
	cout << "How many melons did you buy: ";
	cin >> e;
	
	cout << "Price for apples: " << a << " * 5000 = " << a * 5000 << endl;
	cout << "Price for bananas: " << b << " * 1500 = " << b * 1500 << endl;
	cout << "Price for peaches: " << c << " * 3500 = " << c * 3500 << endl;
	cout << "Price for grapes: " << d << " * 6000 = " << d * 6000 << endl;
	cout << "Price for melons: " << e << " * 1200 = " << e * 1200 << endl;
	cout << "Total price of your purchase: " << (a * 5000) + (b * 1500) + (c * 3500) + (d * 6000) + (e * 1200);
	
	return 0;
}