#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	//줄의숫자
	int numofline;
	cout << "출력할 *의 줄수 : ";
	cin >> numofline;
	//현재줄이 몇번째 줄인지
	int thisline = 1;
	while (thisline <= numofline) {
		//해당 라인에서 출력되야 할 blank 의 개수
		int numofblank = numofline - thisline;
		//출력된 blank의 개수
		int printedblank = 0;
		while (printedblank < numofblank) {
			cout << " ";
			printedblank++;
		}
		//i=별의개수
		for (int i = numofline - numofblank;i > 0;i--)
		{
			cout << "*";
		}
		cout << endl;
		++thisline;
	}
}
		