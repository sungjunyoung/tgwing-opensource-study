#include<iostream>
using namespace std;

int main() {
	int k;
	cout << "���� �Է� : (������)";
	cin >> k;
	if (k < 10 && k>0)
		for (int i = 1; i < 10; i++)
		{
			cout << k << "*" << i << "=" << i*k << endl;
		}
	else
		cout << "������ �ƴ�!" << endl;
	return  0;
}