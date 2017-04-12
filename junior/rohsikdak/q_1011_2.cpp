#include<iostream>
using namespace std;

int main() {
	int casenum;
	unsigned long long int start, fin, length;
	cin >> casenum;
	int ciclenum = 0;
	while (ciclenum < casenum) {
		cin >> start >> fin;
		length = fin - start;
		int standardlength = 1;
		int answer = 1;
		while (length > standardlength)
		{
			answer = answer + 2;
			standardlength = standardlength + answer;
		}
		
		ciclenum++;
		cout << answer << endl;
	}




	return 0;
}