#include<iostream>
using namespace std;
int add(int number1, int number2);
int subtract(int number1, int number2); 
int multiply(int number1, int number2); 
int modular(int number1, int number2);


int main() {
	cout<< modular(subtract(multiply(3, 5), subtract(add(subtract(add(20, 45), multiply(5, 2)), 2), multiply(3, 7))), 4)<<endl;
	return 0;
}
int add(int number1, int number2) {
	return number1 + number2;
}
int subtract(int number1, int number2) {
	return number1 - number2;
}
int multiply(int number1, int number2) {
	return number1*number2;
}
int modular(int number1, int number2){
	return number1%number2;
}
