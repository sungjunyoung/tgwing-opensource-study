#include <iostream>
using namespace std;

int calarea(int height, int length);

int main() 
{
	int height, length;
	cin >> height >> length;
	cout << "�簢���� ����: " << calarea(height, length) << endl;
	return 0;
}

int calarea(int height, int length)
{
	int answer = height*length;
	return answer;
}