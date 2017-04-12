#include <iostream>
using namespace std;

void unitTotal(int unitPrice, int numberPurchase, int& total);

int main()
{
	int a, b, c, d, e, tot1, tot2, tot3, tot4, tot5;
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
	unitTotal(5000, a, tot1);
	unitTotal(1500, b, tot2);
	unitTotal(3500, c, tot3);
	unitTotal(6000, d, tot4);
	unitTotal(1200, e, tot5);
	cout << "Price for apple: " << a << " * 5000 = " << tot1 << endl;
	cout << "Price for banana: " << b << " * 1500 = " << tot2 << endl;
	cout << "Price for peach: " << c << " * 3500 = " << tot3 << endl;
	cout << "Price for grape: " << d << " * 6000 = " << tot4 << endl;
	cout << "Price for melon: " << e << " * 1200 = " << tot5 << endl;
	cout << "Total price of your purchase: " << tot1 + tot2 + tot3 + tot4 + tot5 << endl;
	return 0;
}

void unitTotal(int unitPrice, int numberPurchase, int& total)
{
	total = unitPrice * numberPurchase;
}
