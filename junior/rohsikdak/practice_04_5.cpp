#include<iostream>
#include<math.h>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int a;
	cout << NULL << endl;
	cout << "Enter an integer number: ";
	cin >> a;
	int b = (rand() % 35) + 3;
	cout << "Random number: " << b << endl;
	cout << "Multiplication: " << a*b << endl;
	cout << "Random number power of " << a << " : " << pow(b, a) << endl;
	return 0;
	
} 
