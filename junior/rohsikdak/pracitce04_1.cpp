#include<iostream>
void exchange1(int num1, int num2);
void exchange2(int &num1, int &num2);
using namespace std;
int main() {
	int num1 = 1;
	int num2 = 2;

	cout << "num1 and num2 before exchange1: " << num1 << ", " << num2 << endl;
	exchange1(num1, num2);
	cout << "num1 and num2 after exchange1: " << num1 << ", " << num2 << endl;
	
	
	int num1 = 1;
	int num2 = 2;
	cout << "num1 and num2 before exchange2: " << num1 << ", " << num2 << endl;
	exchange2(num1, num2);
	cout << "num1 and num2 after exchange2: " << num1 << ", " << num2 << endl;
	
	
	cout << "첫번째 함수가 동작하지 않은 이유는 num1과 num2가 해당 함수안에서만 작용하는 임시적인 변수였고 2번째에서는 &을 사용한 pass by reference로 값이 저장되었다." << endl;

	return 0;
}
void exchange1(int num1, int num2)
{
	int hold = num1;
	num1 = num2;
	num2 = hold;
}
void exchange2(int& num1, int& num2)
{
	int hold = num1;
	num1 = num2;
	num2 = hold;
}