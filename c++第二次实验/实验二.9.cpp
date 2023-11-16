#include<iostream>
using namespace std;
int main() {
	int m, sum = 0;
	int n = 1;
	int i = 0;
	for (;sum <= 100;i++)
	{
		m = 2*n;
		sum = sum + m;
		n = m;
	}
	double a = (sum * 0.8) / i;
	cout << "每天平均花：";
	cout << a << "元";
}
