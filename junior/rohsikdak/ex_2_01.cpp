#include<iostream>
using namespace std;

int main() {
	int k;
	cout << "���� �Է� : (������)";
	cin >> k;
	int i = 1;
	if (0< k && k< 10)
		while ( i < 10)
		{
			cout << k << "*" << i << "=" << i*k << endl;
			i++;
		}
	else
		cout << "������ �ƴ�!" << endl;
	return  0;
}