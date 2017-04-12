// while문이 for문보다 조금 아주 조금 더 빠르다.
#include<iostream>
using namespace std;

int main() {
	int i = 0;
	//while문은 조건이맞으면 실행이된다.
	while (i < 10) {
		cout << i << endl;
		i++;
	}
	//do while문은 무조건 1번은 실행이 된다.
	do {
		cout << i << endl;
		i--;
	} while (i > 0);
	//초기화, 조건, 반복
	for (int i = 0;i < 10;i++)
	{
		cout << i << endl;
	}
}