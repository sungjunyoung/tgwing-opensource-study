#include<iostream>
using namespace std;

int main() {
	int t;
	int x1;
	int y1;
	int x2;
	int y2;
	int r1;
	int r2;
	int q = 0;
	cin >> t;
	while (q <= t) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int j = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) *(y1 - y2));
		int k = (r1 + r2) * (r1 + r2);
		
		if (j != 0 && j > k)
			cout << "0";

		if (j != 0 && j == k)
			cout << "1";

		if (j != 0 && j < k)
			cout << "2";
		
		if (j == 0 && r1 == r2)
			cout << "-1";
		
		if (j == 0 && r1 != r2)
			cout << "0";
		
		cout << endl;
		q = q + 1;
	}
	return 0;
}