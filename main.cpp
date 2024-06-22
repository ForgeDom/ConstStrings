#include <iostream>
using namespace std;

int coutChar(char* str, char& Char) {
	int lenth = 0;
	for (int i = 0; i < str[i] != '\0'; ++i) {
		lenth++;
	}

	int count = 0;

	for (int i = 0; i < lenth; ++i) {
		if (str[i] == Char) {
			count++;
		}
	}
	return count;
}

int main() {
	char str[50];
	char Char;

	cout << "Enter the string:" << endl;
	cin.getline(str, 50);

	cout << "Enter the char" << endl;
	cin >> Char;

	cout << coutChar(str, Char) << endl;
	return 0;
}