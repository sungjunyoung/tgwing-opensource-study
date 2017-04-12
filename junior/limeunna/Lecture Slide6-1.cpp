#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	cout << rand()%8+8 << endl;
	cout << abs(-305) << endl;
	cout << labs(-987562) << endl;
	cout << fabs(-33.14159) << endl;
	cout << ceil(3.256) << endl;
	cout << floor(3.256) << endl;
	cout << pow(2, 8) << endl;
	cout << sqrt(512) << endl;
	return 0;
}