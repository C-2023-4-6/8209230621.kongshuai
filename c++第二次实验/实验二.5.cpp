#include <iostream>
using namespace std;
#include<string>
int main() {
	char ch;
	int m=0, n=0, j=0, k=0;//分别为 数字，字母，空格，其他字符
  
	for (int i = 0;;i++) {
		ch = cin.get();
		if (ch == 10)break;
		if (ch >= 48 && ch <= 57)m++;
		else if (ch >= 65 && ch <= 90)n++;
		else if (ch >= 97 && ch <= 122)  n++;
		else if (ch == 32) { j++;}
		else k++;
	}
	cout << "数字的个数为：" << m << endl;;
	cout << "字母的个数为：" << n << endl;;
	cout << "空格的个数为：" << j << endl;;
	cout << "其他字符的个数为：" << k<< endl;
	return 0;
}