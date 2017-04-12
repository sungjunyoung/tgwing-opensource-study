#include<iostream>
#include<math.h>
#include<time.h>
#include<iomanip>
using namespace std;
void mean(int a, int b, int c, float &d);
double variation(int a, int b, int c);
double standarddeviation(int a, int b, int c);
int main()
{
	float d;
	srand((unsigned int)time(NULL));
	int a = rand()%100+1;
	int b = rand()%100+1;
	int c = rand()%100+1;
	cout << "3 random number " << a << " " << b << " " << c << endl;
	mean(a, b, c, d);
	cout << fixed;
	cout << setprecision(5);
	cout << "The average is "<< d << endl;
	cout << "Variation is "<< variation(a, b, c)<< endl;
	cout << "Standard deviation is " << standarddeviation(a,b,c) << endl;


	return 0;
}
void mean(int a, int b, int c, float &d)
{
	d = (a + b + c) / 3.0;

}
double variation(int a, int b, int c)
{
	float d;
	mean(a, b, c, d);
	return (a - d)*(a - d) + (b - d)*(b - d) + (c - d)*(c - d);
}
double standarddeviation(int a, int b, int c) {
	double d;
	d = sqrt(variation(a, b, c));
	return d;
}
