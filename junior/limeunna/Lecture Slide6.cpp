#include <iostream>
using namespace std;

void exchange(int& num1, int& num2);

int main()
{
	int a = 10;
	int b = 9;
	cout << a << ' ' << b << endl;
	exchange(a, b);
	cout << a << ' ' << b << endl;
	return 0;
}

void exchange(int& num1, int& num2)
{
	int hold = num1;
	num1 = num2;
	num2 = hold;
	return;
}