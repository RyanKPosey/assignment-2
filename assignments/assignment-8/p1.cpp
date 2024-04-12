#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    bool changeLetter = false;

    cout << endl;

    for (int i = 0; i < str.length(); i++) {
        if (changeLetter) {
            str[i] = '*';
        } else if (str[i] == ' ') {
            changeLetter = true;
        }
    }

    cout << str << endl;
}