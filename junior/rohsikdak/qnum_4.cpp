#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
	int a;
	int num1 = 900;
	int num2 = 900;
	while (num2 < 1000)
	{
		while (num1 < 1000)
		{
			int num3 = num1*num2;
			int overthousand = num3 / 1000;
			int x = (num3 / 100) % 10;
			int y = (num3 / 10) % 10;
			int z = num3 % 10;
			int underthousand = (100 * z) + (10 * y) + x;
			// (num1*num2) % 1000 = num1*num2의 숫자3개 뒤집기.	

			
			if (overthousand == underthousand)
			cout << num1 << " " << num2 << " " <<num3 << endl;
				
			num1++;
		}
		num2++;
		num1 = 900;
	}
	return 0;
}