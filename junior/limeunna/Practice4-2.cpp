#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int a, b = rand()%35+3;
	cout << "Enter an integer number: ";
	cin >> a;
	cout << "Random number: " << b << endl;
	cout << "Multiplication: " << a*b << endl;
	cout << "Random number to the power of 3: " << pow(b, a) << endl;
	return 0;
}