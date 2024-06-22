#include <iostream>
using namespace std;

void remove(char* str, char& Char) {
	int lenth = 0;
	for (int i = 0; i < str[i] != '\0'; ++i) {
		lenth++;
	}

	for (int i = 0; i < lenth; ++i) {
		if (str[i] != Char) {
			cout << str[i];
		}
	}
}
int main() {
	char Char;
	char str[50];
	cin >> Char;
	cin.ignore();
	cin.getline(str, 50);
	remove(str, Char);
	return 0;
}