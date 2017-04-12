#include<iostream>
#include<iomanip>
using namespace std;
float mean(int a, int b, int c);

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << mean(a, b, c) << endl;

	return 0;
}
float mean(int number1, int number2, int number3) {
	float d = (number1 + number2 + number3);
	float e = (d / 3);
	return e;
}
