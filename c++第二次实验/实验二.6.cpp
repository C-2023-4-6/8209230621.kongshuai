#include<iostream>
using namespace std;
int main() {
	int a , b = 0;
	cout << "请输入你想操作的两个数：";
	cin >> a >> b;
	int big = a > b ? a : b;
	int small = a + b - big;
	for (int j = big;;j++) {
		if (j % big == 0 && j % small == 0) {
			cout << "这两个数的最小公倍数为：" << j << endl;break;
		}
	}
	
	for (int i = 0;;i++) {
		
		int z = big % small;
		if (z == 0)break;
		else big = small, small = z;
	}
	
	cout << "这两个数的最大公约数为：" << small << endl;
	return 0;
}