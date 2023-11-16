#include<iostream>
using namespace std;
int main() {
	char ch;
	for (int i = 0;;i++) {
		cin >> ch;
		if (ch >= 97 && ch <= 122) { cout << static_cast<char>(ch - 32); }
		else if (ch >= 65 && ch <= 90) { cout << (int)(ch + 1); }
	}
	return 0;
}