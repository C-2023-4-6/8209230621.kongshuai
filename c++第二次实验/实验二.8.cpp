#include<iostream>
using namespace std;
int main() {
	double a=0, x=0, y ;
	cout << "������һ�����֣�";
	cin >> a;
	x = a;
	for (int i = 0;;i++) {
		y =( 1.00 / 2) * (x + a / x);
		if ((x-y) < 10e-5)  break; 
		else  x = y;
	}
	cout << y;
	return 0;
}