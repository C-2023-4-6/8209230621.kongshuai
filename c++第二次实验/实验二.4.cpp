#include<iostream>
using namespace std;
int main() {
	int a, b = 0;
	char w = '+';
	cout << "����������Ҫ�������������a=";
	cin >> a;
	cout << "����������Ҫ�������������b=";
	cin >> b;
	cout << "������������е����㣺";
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
