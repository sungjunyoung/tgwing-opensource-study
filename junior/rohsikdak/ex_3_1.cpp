#include<iostream>
using namespace std;
int max(int a, int b);
int min(int b, int a);


int main() {
	int a, b;
	int c, d;
	c = a;
	b = d;
	while (c != b) {
		max(c, d) % min(c, d);
	}
	
}
int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}
int min(int b, int a)
{
	if (b >= a)
		return a;
	else
		return b;
}