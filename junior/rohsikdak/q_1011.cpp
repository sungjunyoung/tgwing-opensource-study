#include<iostream>
using namespace std;

int main() {
	int t;
	int q = 0;
	cin >> t;
	while (q < t) {
		int start, fin;
		int waytogo;
		cin >> start >> fin;
		waytogo = abs(start - fin);
		int left1, number;
		left1 = waytogo;
		number = 0;
		int time=0;
		while (left1 > 2 * (number )) {
			number++;
			left1 = waytogo - 2 * number;
			time = time + 2;

		}
		if (left1 == 0)
			time = time;
		else if (left1 - number <= 1)
			time = time + 1;
		else
			time = time + 2;

		cout << time << endl;
		q++;
	}
	return 0;
}