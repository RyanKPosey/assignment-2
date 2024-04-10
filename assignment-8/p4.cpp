#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    cout << endl;
    
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result = "";
            continue;
        }
        result += str[i];
    }

    cout << result << endl;
}