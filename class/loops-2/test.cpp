#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    cout << endl;
    bool recordChar = true;
    string result = "";

    for (int i = str.length() - 1; i >= 0; i--) {
        if (recordChar) {
            result = str[i] + result;
            recordChar = false;
        } else if (str[i] == ' ') {
            recordChar = true;
        }
    }
    cout << result << endl;
}