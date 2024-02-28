#include <iostream>
using namespace std;

int main() {
    string str1;
    string str2;

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "\nEnter another string: ";
    getline(cin, str2);

    cout << endl;

    cout << str1 + str2 << endl;

}