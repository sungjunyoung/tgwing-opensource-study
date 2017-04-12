#include<iostream>
using namespace std;

int main() {
	int k;
	cout << "숫자 입력 : (구구단)";
	cin >> k;
	if (k < 10 && k>0)
		for (int i = 1; i < 10; i++)
		{
			cout << k << "*" << i << "=" << i*k << endl;
		}
	else
		cout << "구구단 아님!" << endl;
	return  0;
}