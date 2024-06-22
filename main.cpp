#include <iostream>
using namespace std;

void insertChar(char* str, char& Char, int& index){
	int lenth = 0;
	for (int i = 0; i < str[i] != '\0'; ++i) {
		lenth++;
	}

	if (index >= 0 && index <= lenth) {
		for (int i = lenth; i > index; --i) {
			str[i] = str[i - 1];
		}
		str[index] = Char;
		str[lenth + 1] = '\0';
		cout << str << endl;
	}
}

int main() {
	char str[50];
	char Char;
	int index;

	cout << "Enter the string:" << endl;
	cin.getline(str, 50);

	cout << "Enter the char" << endl;
	cin >> Char;

	cout << "Enter index:" << endl;
	cin >> index;

	insertChar(str, Char, index);
	return 0;
}