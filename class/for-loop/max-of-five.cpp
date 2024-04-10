#include <iostream>

using namespace std;

int main() {
    int usrInput;
    int max = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> usrInput;

        cout << endl;

        if (usrInput > max) {
            max = usrInput;
        }
    }

    cout << "The max of your entered numbers is: " << max << endl;
}