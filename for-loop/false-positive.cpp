#include <iostream>

using namespace std;

int main() {
    int usrInput = 1;
    int counter = 0;

    for (; usrInput >= 0;) {
        cout << "Enter a positive number: ";
        cin >> usrInput;

        cout << endl;

        counter++;
    }

    cout << "You took " << counter << " tries to enter a negative number\n";
}