#include <iostream>
using namespace std;
#include<string>
int main() {
	char ch;
	int m=0, n=0, j=0, k=0;//�ֱ�Ϊ ���֣���ĸ���ո������ַ�
  
	for (int i = 0;;i++) {
		ch = cin.get();
		if (ch == 10)break;
		if (ch >= 48 && ch <= 57)m++;
		else if (ch >= 65 && ch <= 90)n++;
		else if (ch >= 97 && ch <= 122)  n++;
		else if (ch == 32) { j++;}
		else k++;
	}
	cout << "���ֵĸ���Ϊ��" << m << endl;;
	cout << "��ĸ�ĸ���Ϊ��" << n << endl;;
	cout << "�ո�ĸ���Ϊ��" << j << endl;;
	cout << "�����ַ��ĸ���Ϊ��" << k<< endl;
	return 0;
}