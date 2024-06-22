#include <iostream>
using namespace std;

void count(char* str, int& letters, int& digits, int& others) {
	letters = 0;
	digits = 0;
	others = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			letters++;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			digits++;
		}
		else {
			others++;
		}
	}
}
int main() {
	char str[50];
	cin.getline(str, 50);
	int letters, digits, others;
	count(str, letters, digits, others);
	cout << "Letters - " << letters << endl;
	cout << "Digits - " << digits << endl;
	cout << "Other symbols - " << others << endl;
	return 0;
}