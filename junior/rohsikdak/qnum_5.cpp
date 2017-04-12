#include<iostream>
using namespace std;
int main() {
	int q = 20;
	long long int k = 1;
	while (q > 1) {
		if (k%q == 0)
			q--;
		else 
		{
			k = k*q;
			q--;
		}
	}
	cout << k;
	return 0;
}