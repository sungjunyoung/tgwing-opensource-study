#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int aver(int num1, int num2, int num3);

int main()
{
	srand(time(NULL));
	double a = rand() % 100 + 1;
	double b = rand() % 100 + 1;
	double c = rand() % 100 + 1;
	double average1 = aver(a, b, c);
	double variance1 = aver(pow(a-average1, 2), pow(b- average1, 2), pow(c- average1, 2));
	double stddev1 = sqrt(variance1);
	/*cout << "Average1: " << average1 << endl;
	cout << "Variance1: " << variance1 << endl;
	cout << "Standard deviation1: " << stddev1 << endl;*/
	double d = rand() % 100 + 1;
	double e = rand() % 100 + 1;
	double f = rand() % 100 + 1;
	double average2 = aver(d, e, f);
	double variance2 = aver(pow(d- average2, 2), pow(e- average2, 2), pow(f- average2, 2));
	double stddev2 = sqrt(variance2);
	/*cout << "Average2: " << average2 << endl;
	cout << "Variance2: " << variance2 << endl;
	cout << "Standard deviation2: " << stddev2 << endl;*/
	cout << "Difference of the two averages: " << (average1 - average2) << endl;
	cout << "Difference of the two variances: " << (variance1 - variance2) << endl;
	cout << "Difference of the two standard deviations: " << (stddev1 - stddev2) << endl;
	return 0;

}

int aver(int num1, int num2, int num3)
{
	double average = float(num1 + num2 + num3) / 3;
	return average;
}