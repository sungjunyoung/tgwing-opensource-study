#include<iostream>
using namespace std;

int main() {
	//�Է¹�����
	int a, b;
	cout << "���� �Է�(����� ã��) : ";
	cin >> a >> b;
	int c = a;
	//a�����ؼ� b�γ������� ������ټ���
	int k = 1;
	while (c%b != 0)
	{
		c = a*k++;
	}
	if (c <= 100)
	{
		//�ּҰ����
		int d = c;
		//0���ٰ� d�� ���� Ƚ��
		int time = 1;
		while (d <= 100) {
			cout << d << endl;
			d = c*++time;
		}
	
		cout << "������� ���� : "<< time-1 << endl;
	}
	else
	{
		cout << "�ּҰ������ 100�� �ѽ��ϴ�." << endl;
	}


}
