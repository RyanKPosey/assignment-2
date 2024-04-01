#include <iostream>
using namespace std;
int main() {
    string usrInput;
    int numbers = 0;
    int spaces = 0;
    int uppercase = 0;
    int lowercase = 0;

    cout << "Enter string: ";
    getline(cin, usrInput);
    cout << endl;

    for (int i = 0; i < usrInput.length(); i++) {
        if (isdigit(usrInput[i])) {
            numbers++;
        } else if (usrInput[i] == ' ') {
            spaces++;
        } else if (isupper(usrInput[i])) {
            uppercase++;
        } else if (islower(usrInput[i])) {
            lowercase++;
        }
    }

    cout << "Numbers: " << numbers
        << "\nSpaces: " << spaces
        << "\nUppercase: " << uppercase
        << "\nLowercase: " << lowercase
        << endl;
}