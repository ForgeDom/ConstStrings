#include <iostream>
using namespace std;

int countWords(char* str) {
	int count = 0;
	bool word = false;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
			word = false;
		}
		else if (!word) {
			word = true;
			count++;
		}
	}
	return count;
}
int main() {
	char str[50];
	cin.getline(str, 50);
	cout << countWords(str) << endl;

	return 0;
}