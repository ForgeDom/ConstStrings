#include <iostream>
using namespace std;

void insertChar(char* str, char& Char1, char& Char2) {
	int lenth = 0;
	for (int i = 0; i < str[i] != '\0'; ++i) {
		lenth++;
	}

	for (int i = 0; i < lenth; ++i) {
		if (str[i] == Char2) {
			str[i] = Char1;
		}
	}
	cout << str << endl;
}

int main() {
	char str[100];
	char Char1 = '!';
	char Char2 = '.';

	cout << "Enter the string:" << endl;
	cin.getline(str, 50);

	insertChar(str, Char1, Char2);
	return 0;
}