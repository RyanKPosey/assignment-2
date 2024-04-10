#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int index = -1;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a') {
            index = i;
        }
    }

    if (index != -1) {
        cout << index;
    } else {
        cout << "Not found";
    }
    
    cout << endl;
}