#include <iostream>
using namespace std;
int main () {
    int x;

    cout << "Enter num for X: ";
    cin >> x;

    cout << endl;

    if (x < 0) {
        cout << "Number is negative";
    } else if (x > 0) {
        cout << "Number is positive";
    } else {
        cout << "Number is 0";
    }
    cout << endl;
}