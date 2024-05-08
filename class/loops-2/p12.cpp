#include <iostream>
using namespace std;
int main() {
    string str, str2;
    cout << "Enter 2 words: ";

    cin >> str >> str2;
    cout << endl;

    bool anagrams = true;

    for (int i = 0; i < str.length(); i++) {
        bool includesChar = false;
        for (int i2 = 0; i2 < str2.length(); i2++) {
            if (str[i] == str2[i2]) {
                includesChar = true;
                break;
            }
        }

        if (!includesChar) {
            anagrams = false;
            break;
        }
    }

    for (int i = 0; i < str2.length(); i++) {
        bool includesChar = false;
        for (int i2 = 0; i2 < str.length(); i2++) {
            if (str2[i] == str[i2]) {
                includesChar = true;
                break;
            }
        }

        if (!includesChar) {
            anagrams = false;
            break;
        }
    }

    cout << "Are they anagrams: " << anagrams << endl;

}