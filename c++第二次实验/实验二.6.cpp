#include<iostream>
using namespace std;
int main() {
	int a , b = 0;
	cout << "�����������������������";
	cin >> a >> b;
	int big = a > b ? a : b;
	int small = a + b - big;
	for (int j = big;;j++) {
		if (j % big == 0 && j % small == 0) {
			cout << "������������С������Ϊ��" << j << endl;break;
		}
	}
	
	for (int i = 0;;i++) {
		
		int z = big % small;
		if (z == 0)break;
		else big = small, small = z;
	}
	
	cout << "�������������Լ��Ϊ��" << small << endl;
	return 0;
}