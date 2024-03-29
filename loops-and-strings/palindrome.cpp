#include <iostream>
using namespace std;
int main() {
    string usrInput;
    bool isPalindrome = false;

    cout << "Enter a string: ";
    getline(cin, usrInput);

    cout << endl;

    for (int i = 0, i2 = usrInput.length()-1; true; i++, i2--) {
        if (i >= i2) {
            isPalindrome = true;
            break;
        }

        if (usrInput[i] != usrInput[i2]) {
            isPalindrome = false;
            break;
        }
    }

    // cout << usrInput << endl << usrInputCopy << endl;
    if (isPalindrome) {
        cout << "It's a palindrome";
    } else {
        cout << "It's not a palindrome";
    }

    cout << endl;
}