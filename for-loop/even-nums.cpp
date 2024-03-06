#include <iostream>

using namespace std;

int main() {
    int usrInput;

    cout << "Enter a num: ";
    cin >> usrInput;

    cout << endl;

    for (int i = 0; i < usrInput; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
}