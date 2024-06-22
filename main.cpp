#include <iostream>
using namespace std;

void palidrom(char* str) {
	int lenth = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		lenth++;
	}

	bool isPalidrom = true;

	for (int i = 0; i < lenth / 2; i++) {
		if (str[i] != str[lenth - 1 - i]) {
			isPalidrom = false;
			break;
		}
	}

	if (isPalidrom) {
		cout << "The string is a palindrome." << endl;
	}
	else {
		cout << "The string is not a palindrome." << endl;
	}
}
int main() {
	char str[50];
	cin.getline(str, 50);
	palidrom(str);

	return 0;
}