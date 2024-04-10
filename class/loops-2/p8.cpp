#include <iostream>
using namespace std;
int main() {
    int index = 0;

    string str;
    cout << "Enter string: ";
    getline(cin, str);

    for (int i = 0; i < 4; i++) {
        for (int i2 = 0; i2 < 4; i2++) {
            cout << str[index];
            index++;
        }
        cout << endl;
    }
}