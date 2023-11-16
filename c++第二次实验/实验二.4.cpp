#include<iostream>
using namespace std;
int main() {
	int a, b = 0;
	char w = '+';
	cout << "请输入你需要进行运算的数字a=";
	cin >> a;
	cout << "请输入你需要进行运算的数字b=";
	cin >> b;
	cout << "请输入你想进行的运算：";
	cin >> w;
	switch (w) {
	case '+':cout << a + b;break;
	case '-':cout << a - b;break;
	case '*':cout << a * b;break;
	case '/':cout << a / b;break;
	case '%':cout << a % b; break;
	}
	return 0;
}
