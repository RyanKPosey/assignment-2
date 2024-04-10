#include <iostream>

using namespace std;

int main () {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    str[0] = 'S';

    cout << endl << str << endl;
}