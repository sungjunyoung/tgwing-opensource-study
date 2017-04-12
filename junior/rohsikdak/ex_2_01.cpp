#include<iostream>
using namespace std;

int main() {
	int k;
	cout << "숫자 입력 : (구구단)";
	cin >> k;
	int i = 1;
	if (0< k && k< 10)
		while ( i < 10)
		{
			cout << k << "*" << i << "=" << i*k << endl;
			i++;
		}
	else
		cout << "구구단 아님!" << endl;
	return  0;
}