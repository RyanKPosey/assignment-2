#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << endl;

    string result = "";
    for (int i = 0; i < str.length(); i++) {
        bool recordChar = true;
        for (int i2 = 0; i2 < result.length(); i2++) {
            if (str[i] == result[i2]) {
                recordChar = false;
            }
        }
        if (recordChar) {
            result += str[i];
        }
    }

    cout << result << endl;
}