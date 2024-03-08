#include <iostream>

using namespace std;

int main() {
    int currentNum;
    int previousNum = 0;
    bool ascending = true;

    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> currentNum;

        cout << endl;

        if (currentNum > previousNum) {
            previousNum = currentNum;
            continue;
        } else {
            ascending = false;
        }
    }

    cout << ascending << endl;

}