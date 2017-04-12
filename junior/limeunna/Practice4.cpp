#include <iostream>
using namespace std;

void mean(int number1, int number2, int number3, float& answer);

int main() 
{
	int number1, number2, number3;
	float answer;
	cin >> number1 >> number2 >> number3;
	mean(number1, number2, number3, answer);
	cout << "answer after mean: " << answer << endl;
	return 0;
}

void mean(int number1, int number2, int number3, float& answer)
{
	answer = float(number1 + number2 + number3) / 3;
}