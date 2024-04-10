#include <iostream>

using namespace std;

int main() {
    string str;
    //  = "lidauhfldiah"

    cout << "Enter a string: ";
    getline(cin, str);

    cout << str[0] << str[1] << str[str.length()-1] << endl;
}