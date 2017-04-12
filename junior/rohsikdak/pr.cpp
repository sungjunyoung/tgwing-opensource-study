#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main() {
	int a = 4;
	int *_a;
	_a = &a;
	cout << &a << " " << *_a << endl;
	return 0;
}
