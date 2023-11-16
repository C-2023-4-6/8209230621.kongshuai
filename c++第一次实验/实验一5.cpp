#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float a, b = 1.00;
	cout << "请输入华氏温度：";
	cin >> b ;
	a = (b - 32)* 5 / 9  ;
	cout <<fixed<<setprecision(2)<< "摄氏温度为：" << a;
	return 0;
}