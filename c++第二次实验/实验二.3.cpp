#include<iostream>
using namespace std;
int main() {
	int a, b, c = 0;
	cout << "�����������ε����߳���";
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		cout << "�����ε��ܳ�Ϊ��" << a + b + c << endl;
		if (a == b || b == c || a == c) cout << "��������Ϊ����������" << endl;
	}
	else cout << "�������ֵ�����������ε�����" << endl;
	return 0;
}