#include<iostream>
using namespace std;

int main() {
	//입력받은수
	int a, b;
	cout << "숫자 입력(공배수 찾기) : ";
	cin >> a >> b;
	int c = a;
	//a에곱해서 b로나눠지게 만들어줄숫자
	int k = 1;
	while (c%b != 0)
	{
		c = a*k++;
	}
	if (c <= 100)
	{
		//최소공배수
		int d = c;
		//0에다가 d를 더한 횟수
		int time = 1;
		while (d <= 100) {
			cout << d << endl;
			d = c*++time;
		}
	
		cout << "공배수의 갯수 : "<< time-1 << endl;
	}
	else
	{
		cout << "최소공배수가 100을 넘습니다." << endl;
	}


}
