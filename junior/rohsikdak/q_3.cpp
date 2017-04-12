#include<iostream>
using namespace std;
long long int num2;

int main() {
	int a = 1;
	int b = 2;
	long long int c = 0;
	while (a < 4000000 && b < 4000000) {
		cout << a << " " << b << " ";
		a = a + b;
		
		if ((a % 2) == 0)
			c = c + a;
		
		
		if ((b % 2) == 0)
			c = c + b;
		
		b = b + a;
	}

	cout << c;
	return 0;
}