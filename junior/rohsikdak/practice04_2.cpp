#include<iostream>
using namespace std;
void mean(int a, int b, int c, float &d);
int main() 
{
	int a, b, c;
	float d;
	cin >> a >> b >> c ;
	mean(a, b, c, d);

	cout << a <<" " << b << " " << c << " " << d;

	return 0;
}
void mean(int a, int b, int c, float &d)
{
	d = (a + b + c) / 3.0;

}