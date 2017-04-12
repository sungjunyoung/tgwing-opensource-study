#include<iostream>
using namespace std;
long fun(long x = 1, long y = 1);
int main() {
	int a = 2, b = 3, c = 4, d = 5;
	long r = fun(a, b);
	long s = fun(fun(a, b), fun(c));
	//fun(fun(2,3),fun(4,1))
	long t = fun(c + 3, fun(d + 7, b));
	//fun(7,fun(12,3)
	long u = fun(fun(fun(fun())));
	//fun(fun(fun(fun(1,1),1),1,)1)
	
	long v = fun(fun(b + c, fun(c + 3)), fun(a + d, fun()));
	cout << r << ' ' << s << ' ' << t << ' ' << u << ' ' << v << endl;

	return 0;
}
long fun(long x, long y) {
	long t = x + y;
	long z = x * y;
	return (t + z);
}

	