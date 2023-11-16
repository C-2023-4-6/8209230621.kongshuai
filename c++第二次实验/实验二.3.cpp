#include<iostream>
using namespace std;
int main() {
	int a, b, c = 0;
	cout << "请输入三角形的三边长：";
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		cout << "三角形的周长为：" << a + b + c << endl;
		if (a == b || b == c || a == c) cout << "此三角形为等腰三角形" << endl;
	}
	else cout << "你输入的值不符合三角形的特征" << endl;
	return 0;
}