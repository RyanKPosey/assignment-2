#include <iostream>

using namespace std;

int main() {
    int usrInput = 1;
    int counter = 0;

    for(;;) {
        cout << "Enter a positive number: ";
        cin >> usrInput;

        cout << endl;

        if (usrInput <= 0) {
            break;
        }
        counter++;
    }

    cout << "You took " << counter << " tries to enter a negative number\n";
}