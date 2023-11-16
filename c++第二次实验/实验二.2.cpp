#include <iostream>
using namespace std;
int main() {
	double x, y = 0;
	for (int i = 0;;i++) {
		cout << "请输入x的值：" << endl;;
		cin >> x;

		if (x > 0 && x < 1) 
			y = (-2 * x) + 3;
		
		else if (x >= 1 && x < 5) y = 2 / (4 * x) + 1;
		else if (x >= 5 && x < 10) y = x * x; 
		cout << "y的值：" << y << endl;
	}
	return 0;
}