#include<iostream>
using namespace std;
int max(int a, int b);
int main() {
	int num1, num2;
	cout << "���� �Է� �ι� : ";
	cin >> num1 >> num2;
	int c = num1;
	//num1�� ���� Ƚ��
	int k = 1;
	while (1)
	{
		if (c%num2 != 0)
			c = num1*k++;
		else
			break;

	}
	
	cout << "�ּ� ����� : "<<c << endl;
	int i = max(num1, num2);
	
	while (1)
	{
		if (num1 % i == 0 && num2%i == 0)
			break;
		else
			i--;
	}
	cout <<  "�ִ� ����� : "<< i << endl;
	
}
int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}