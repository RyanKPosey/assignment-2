#include <iostream>
using namespace std;
int main()  {
    string userString;
    char userChar;
    char replaceChar;

    

    cout << "Enter a string: ";
    getline(cin, userString);

    cout << "\nEnter a character: ";
    cin >> userChar;

    cout << "\nEnter a character to replace the " << userChar << "'s with: ";
    cin >> replaceChar;

    cout << endl;

    for (int i = 0; i < sizeof(userString); i++) {
        if (userString[i] == userChar) {
            userString[i] = replaceChar;
        }
    }

    cout << "Your new string is: \"" << userString << "\"\n";
}