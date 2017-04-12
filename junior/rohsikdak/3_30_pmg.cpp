#include<iostream>
using namespace std;
void fun(int &x);
void exchange(int &a, int &b);

int main()
{
	int a = 5;
	fun(a);
	cout << a << endl;
	return 0;
}
void fun(int& x)
{
	x = x + 3;
	return;
}
void exchange(int &a, int &b)
{
	int c =  a;
	int a = b;
	int b = c;
}