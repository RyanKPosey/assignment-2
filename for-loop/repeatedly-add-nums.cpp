#include <iostream>

using namespace std;

int main() {
    int total = 0;
    bool calcContinue = true;
    for (; calcContinue;) {
        int currentNumber;

        cout << "Enter a number to add to the total (enter 0 to stop): ";
        cin >> currentNumber;

        cout << endl;

        total += currentNumber;

        if (currentNumber == 0) {
            calcContinue = false;
        }
    }

    cout << "The total is " << total << endl;
}