#include <iostream>
using namespace std;

void replace(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			str[i] = '\t';
		}
	}
}
int main() {
	char str[] = "Hello my friend im Jhon!";
	replace(str);
	cout << str << endl;
	return 0;
}