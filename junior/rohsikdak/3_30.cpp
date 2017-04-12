#include<iostream>
using namespace std;
void sum(int x, int y, int &z);

int main() {
	int a, b, ccc;
	ccc = 0;
	cin >> a >> b;
	sum(a, b, ccc);
	cout << ccc << endl;

	return 0;
}
void sum(int x, int y, int &k) {
	k = x + y;
}