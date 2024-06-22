#include <iostream>
using namespace std;

void countCharacters(const char* str, int& letters, int& digits, int& others) {
    letters = 0;
    digits = 0;
    others = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            letters++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else {
            others++;
        }
    }
}

int main() {
    char str[100];
    int letters, digits, others;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    countCharacters(str, letters, digits, others);

    cout << "Letters - " << letters << endl;
    cout << "Digit - " << digits << endl;
    cout << "Other - " << others << endl;

    return 0;
}
