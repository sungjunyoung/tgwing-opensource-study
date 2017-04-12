#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	long long int a = 600851475143;
	int num = 2;
	while (a > 1) 
	{
		
		if (a%num == 0)
			a = a / num; 
		else
			num = num + 1;
		
		if (a%num == 0)
			cout << num << endl;
		if (a%num == 0)
			cout << a << endl;
	}
	return 0;

}