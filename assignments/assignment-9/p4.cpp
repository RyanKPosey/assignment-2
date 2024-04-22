#include <iostream>
using namespace std;

int main() {
    string names;

    cout << "Enter some names: ";
    getline(cin, names);

    string currName = "";
    string alphabeticalFirst = "";
    for(int i = 0; i <= names.length(); i++) {
        if (names[i] == ' ' || i == names.length()) {
            if (alphabeticalFirst.length() < 1) {
                alphabeticalFirst = currName;
                currName = "";
                continue;
            }

            for (int i = 0; i < currName.length(); i++) {
                if(!((int)currName[i] <= (int)alphabeticalFirst[i])) {
                    break;
                }

                if ((int)currName[i] < (int)alphabeticalFirst[i]) {
                    alphabeticalFirst = currName;
                    break;
                }
            }
            currName = "";
            continue;
        }
        
        currName += names[i];
    }

    cout << "best: " << alphabeticalFirst << endl;
}