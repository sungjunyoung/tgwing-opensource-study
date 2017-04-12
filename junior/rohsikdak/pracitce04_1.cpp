#include<iostream>
void exchange1(int num1, int num2);
void exchange2(int &num1, int &num2);
using namespace std;
int main() {
	int num1 = 1;
	int num2 = 2;

	cout << "num1 and num2 before exchange1: " << num1 << ", " << num2 << endl;
	exchange1(num1, num2);
	cout << "num1 and num2 after exchange1: " << num1 << ", " << num2 << endl;
	
	
	int num1 = 1;
	int num2 = 2;
	cout << "num1 and num2 before exchange2: " << num1 << ", " << num2 << endl;
	exchange2(num1, num2);
	cout << "num1 and num2 after exchange2: " << num1 << ", " << num2 << endl;
	
	
	cout << "ù��° �Լ��� �������� ���� ������ num1�� num2�� �ش� �Լ��ȿ����� �ۿ��ϴ� �ӽ����� �������� 2��°������ &�� ����� pass by reference�� ���� ����Ǿ���." << endl;

	return 0;
}
void exchange1(int num1, int num2)
{
	int hold = num1;
	num1 = num2;
	num2 = hold;
}
void exchange2(int& num1, int& num2)
{
	int hold = num1;
	num1 = num2;
	num2 = hold;
}