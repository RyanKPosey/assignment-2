#include <iostream>
using namespace std;
int main()  {
    string userString;
    char userChar;
    int numOfOccurances = 0;

    cout << "Enter a string: ";
    getline(cin, userString);

    cout << "\nEnter a character: ";
    cin >> userChar;

    cout << endl;

    for (int i = 0; i < sizeof(userString); i++) {
        if (userString[i] == userChar) {
            numOfOccurances++;
        }
    }

    cout << "There are " << numOfOccurances << " " << userChar << "'s in " << "\"" << userString << "\"\n";
}