#include <iostream>
using namespace std;

void removeChar(char* str, int& number) {
    int lenth = 0;
    while (str[lenth] != '\0') {
        lenth++;
    }

    if (number >= 0 && number < lenth) {
        for (int i = 0; i < lenth; ++i) {
            if (i != number - 1) {
                cout << str[i];
           }
        }
    }
}

int main() {
    int number;
    char str[50];

    cout << "Enter a number and a string: ";
    cin >> number;
    cin.ignore();
    cin.getline(str, 50);

    removeChar(str, number);

    return 0;
}
