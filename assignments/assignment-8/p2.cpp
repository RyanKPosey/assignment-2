#include <iostream>
using namespace std;
int main() {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    cout << endl;

    bool recordChar = true;
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            recordChar = true;
        } else if (recordChar) {
            result += str[i];
            recordChar = false;
        }
    }

    cout << result << endl;
}