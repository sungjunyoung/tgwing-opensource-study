#include<iostream>
using namespace std;
int max(int a, int b);
int main() {
	int num1, num2;
	cout << "숫자 입력 두번 : ";
	cin >> num1 >> num2;
	int c = num1;
	//num1을 더한 횟수
	int k = 1;
	while (1)
	{
		if (c%num2 != 0)
			c = num1*k++;
		else
			break;

	}
	
	cout << "최소 공배수 : "<<c << endl;
	int i = max(num1, num2);
	
	while (1)
	{
		if (num1 % i == 0 && num2%i == 0)
			break;
		else
			i--;
	}
	cout <<  "최대 공약수 : "<< i << endl;
	
}
int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}