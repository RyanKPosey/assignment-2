#include <iostream>
using namespace std;
int main () {
    string names;
    string currentName;
    string firstName;

    getline(cin, names);

    for (int i = 0; i < names.length(); i++) {
        if (names[i] == ' ' ) {
            if (currentName[0] < firstName[0]) {
                firstName = currentName;
            }

            currentName = "";
        } else {
            currentName += names[i];
        }
    }

    cout << endl << firstName << endl;
}