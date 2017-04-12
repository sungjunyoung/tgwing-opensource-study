#include<iostream>

using namespace std;

int unitTotal(int UnitPrice, int numberPurchase,int &d);
int main() {
	int a, b, c, d, e;//apple, bananas, peaches, grapes, melons)
	cout << " How many apples did you buy : ";
	cin >> a;
	cout << " How many bananas did you buy : ";
	cin >> b;
	cout << " How many peaches did you buy : ";
	cin >> c;
	cout << " How many grapes did you buy : ";
	cin >> d;
	cout << " How many melons did you buy : ";
	cin >> e;
	int Tapple,Tbanana,Tpeach, Tgrape ,Tmelon;
	cout << "Price for apple : " << a << " * 5000" << " = " << unitTotal(a, 5000,Tapple) << endl;
	cout << "Price for banana : " << b << " * 1500" << " = " << unitTotal(b, 1500,Tbanana) << endl;
	cout << "Price for peach : " << c << " * 3500" << " = " << unitTotal(c, 3500,Tpeach) << endl;
	cout << "Price for grape : " << d << " * 6000" << " = " << unitTotal(d, 6000,Tgrape) << endl;
	cout << "Price for melon : " << e << " * 1200" << " = " << unitTotal(e, 1200,Tmelon) << endl;
	cout << "Total price of you purchase : " << Tapple+Tbanana+Tpeach+Tgrape+Tmelon << endl;
	return 0;
}
int unitTotal(int UnitPrice, int numberPurchase,int &d) {
	d = UnitPrice*numberPurchase;
		return d;
}
