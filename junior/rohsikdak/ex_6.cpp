#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	//���Ǽ���
	int numofline;
	cout << "����� *�� �ټ� : ";
	cin >> numofline;
	//�������� ���° ������
	int thisline = 1;
	while (thisline <= numofline) {
		//�ش� ���ο��� ��µǾ� �� blank �� ����
		int numofblank = numofline - thisline;
		//��µ� blank�� ����
		int printedblank = 0;
		while (printedblank < numofblank) {
			cout << " ";
			printedblank++;
		}
		//i=���ǰ���
		for (int i = numofline - numofblank;i > 0;i--)
		{
			cout << "*";
		}
		cout << endl;
		++thisline;
	}
}
		