#include<iostream>
using namespace std;
long long int num2;
long long int j;
int main() {
	num2 = 1;
	j = 600851475143;
	while (num2 <= j) {
	
		num2 = num2 + 1;
		if (j % num2 == 0)
			cout << num2 << "인수입니다." << endl;
		j = j % num2;
		
		
			

	}
	return 0;
}