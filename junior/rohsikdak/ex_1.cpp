// while���� for������ ���� ���� ���� �� ������.
#include<iostream>
using namespace std;

int main() {
	int i = 0;
	//while���� �����̸����� �����̵ȴ�.
	while (i < 10) {
		cout << i << endl;
		i++;
	}
	//do while���� ������ 1���� ������ �ȴ�.
	do {
		cout << i << endl;
		i--;
	} while (i > 0);
	//�ʱ�ȭ, ����, �ݺ�
	for (int i = 0;i < 10;i++)
	{
		cout << i << endl;
	}
}